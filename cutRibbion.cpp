#include <iostream>
#include <algorithm>
using namespace std;
void cut()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int max = 0;
    int arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;

    sort(arr, arr + 3);
    a = arr[0];
    b = arr[1];
    c = arr[2];
    if (n % arr[0] == 0)
    {
        max = n / arr[0];
        cout << max << endl;
    }
    else if (a == b || b == c || a == b == c)
    {
        for (int i = 0; i <= n / a; i++)
        {
            for (int j = 0; j <= n / c; j++)
            {
                if ((i * a) + (j * c) == n)
                {
                    if (max < i + j)
                    {
                        max = i + j;
                    }
                    break;
                }
            }
        }
        cout << max << endl;
    }
    else
    {
        for (int i = 0; i <= n / a; i++)
        {
            for (int j = 0; j <= n / b; j++)
            {
                for (int k = 0; k <= n / c; k++)
                {
                    if ((i * a) + (j * b) + (k * c) == n)
                    {
                        if (max < i + j + k)
                        {
                            max = i + j + k;
                        }
                        break;
                    }
                }
            }
        }
        cout << max << endl;
    }
}
int main()
{
    cut();
    return 0;
}