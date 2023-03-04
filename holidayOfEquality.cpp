#include <iostream>
#include <algorithm>
using namespace std;
void king()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int max = arr[n - 1];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + max - arr[i];
    }
    cout << sum << endl;
}
int main()
{
    king();
    return 0;
}