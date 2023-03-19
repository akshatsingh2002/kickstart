#include <iostream>
#include <algorithm>
using namespace std;
void candies()
{
    int n;
    cin >> n;
    int arr[n];
    int con = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i < n; i++)
    {
        for (int k = i; k >= 0; k--)
        {
            if (arr[k] > arr[k - 1] && arr[k] % 2 == 0)
            {
                swap(arr[k - 1], arr[k]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {   
        if (arr[i] % 2 == 0)
        {
            sum1 = sum1 + arr[i];
        }
        else
        {
            sum2 = sum2 + arr[i];
        }
        if (sum1 > sum2)
        {
            con = 1;
        }
        else
        {
            con = 0;
            break;
        }
    }
    if (con == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
int main()
{
    int k;
    cin >> k;
    while (k != 0)
    {
        candies();
        k = k - 1;
    }
    return 0;
}