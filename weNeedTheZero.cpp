#include <iostream>
using namespace std;
int zero()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 256; i++)
    {
        int ans = arr[0] ^ i;
        for (int j = 1; j < n; j++)
        {
            ans = ans ^ (arr[j] ^ i);
        }
        if (ans == 0)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        int val = zero();
        cout << val << endl;
    }
    return 0;
}