#include <iostream>
#include <algorithm>
using namespace std;
void drink()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int val;
        int ans = 0;
        cin >> val;
        int j = 0;
        while (arr[j] <= val)
        {
            ans++;
            j++;
        }
        cout << ans << endl;
    }
}
int main()
{
    drink();
    return 0;
}