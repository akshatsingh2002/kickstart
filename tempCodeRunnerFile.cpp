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
    else
    {
        for (int i = 0; i <= n / a; i++)
        {
            for (int j = 0; j <= n / b; j++)
            {
                int k = n - (a * i) + (b * j);
                if (k * c < 0)
                {
                    break;
                }

                else
                {
                    k = k / c;
                    if (max < i + j + k)
                    {
                        max = i + j + k;
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