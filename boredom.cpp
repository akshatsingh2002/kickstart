#include <iostream>
#include <algorithm>
using namespace std;
void boredom()
{
    int n;
    cin >> n;
    int arr[n];
    int max = 0;
    int cost = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int val = arr[0];
    for (int i = 0; i < n; i++)
    {   int val = arr[i];
        for (int j = i; j < n; j++)
        {
            if (arr[j] == val)
            {
                cost = cost + val;
            }
            else if (arr[j] != val + 1 && arr[j] != val - 1)
            {
                cost = cost + arr[j];
                val = arr[j];
            }
        }
        if (max < cost)
        {
            max = cost;
        }
        cost = 0;
    }
    cout << max << endl;
}
int main()
{
    boredom();
    return 0;
}