#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
void boredom()
{
    int n;
    cin >> n;
    map<int, int> arr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (arr.find(val) != arr.end())
        {
            arr.insert({val, val});
        }
        else

        {   arr[val[]]
        }
    }
    for (auto itr = arr.begin(); itr != arr.end(); itr++)
    {
        cout << itr->first << itr->second;
    }
}
int main()
{
    boredom();
    return 0;
}