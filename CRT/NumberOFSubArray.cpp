#include <iostream>
#include <map>
// number of subarray that have the target sum
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
    int target = 0;
    cin >> target;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (mymap.count(pre[i]-target))
        {  
            ans = ans + mymap[pre[i] - target];
            mymap[pre[i]]++;
        }
        else
        {
            mymap[pre[i]]++;
        }
    }
    for (auto itr : mymap)
    {
        cout << itr.first << " " << itr.second << endl;
    }
    cout << ans << endl;

    return 0;
}