#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
void threes()
{
    long long t;
    cin >> t;
    int arr[t];
    map<int, int> mymap;
    int maxval = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        maxval = max(maxval, arr[i]);
        mymap[arr[i]] = 0;
    }
    for (int i = 1, j = 1; j <= maxval; i++)
    {
        if (i % 3 != 0 and i % 10 != 3)
        {
            if (mymap.find(j) != mymap.end())
            {
                mymap[j] = i;
            }
            j++;
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout << mymap[arr[i]] << " ";
    }
}
int main()
{

    threes();
    return 0;
}
