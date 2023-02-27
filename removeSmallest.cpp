#include <bits/stdc++.h>
using namespace std;
void remove()
{
    int n;
    cin >> n;
    int count = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1] + 1 || arr[i] == arr[i - 1])
        {
            count++;
        }
    }
    if (n - count == 1)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
int main()
{
    int a;
    cin >> a;
    while (a != 0)
    {
        remove();
        a = a - 1;
    }
    return 0;
}