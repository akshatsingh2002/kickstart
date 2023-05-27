#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> mymap;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pre[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        pre[i] = sum;
    }
    for (int i = 0; i < n; i++)
    {
        cout << pre[i];
    }
    int target = 0, index = 0;
    cin >> target >> target;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (mymap.find(pre[i] - target) != mymap.end())
        {
            mymap[arr[i]] = 1;
            ans++;
        }
        else
        {
            mymap[arr[i]]++;
        }
    }
    cout << ans << endl;

    return 0;
}