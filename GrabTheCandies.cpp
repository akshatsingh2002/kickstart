#include <iostream>
#include <algorithm>
using namespace std;
void candies()
{
    int n;
    cin >> n;
    int arr[n];
    int se = 0, so = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i] % 2 == 0)
        {
            se = se + arr[i];
        }
        else
        {
            so = so + arr[i];
        }
    }

    if (se > so)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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