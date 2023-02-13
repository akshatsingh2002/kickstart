#include <iostream>
#include <math.h>
using namespace std;
void round()
{
    int n;
    cin >> n;
    int count = 0, arr[4];
    int i = 0;
    while (n != 0)
    {
        if (n % 10 == 0)
        {
            i++;
            n = n / 10;
            arr[i] = 0;
        }
        else
        {
            arr[count] = n % 10 * pow(10, i);
            count++;
            n = n / 10;
            i++;
        }
    }
    cout << count << endl;
    for (int j = 0; j < count; j++)
    {
        cout << arr[j] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        n = n - 1;
        round();
    }
    return 0;
}