#include <iostream>
#include <algorithm>
using namespace std;
void participate()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + k <= 5)
        {
            count++;
        }
    }
    cout << count / 3 << endl;
}
int main()
{
    participate();
    return 0;
}