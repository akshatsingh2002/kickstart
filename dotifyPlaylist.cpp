#include <bits/stdc++.h>
using namespace std;
void playlist()
{
    map<long long , vector<long long>> mymap;
    long long n, k, l;
    cin >> n >> k >> l;
    long long minutes;
    long long templ;
    for (int i = 0; i < n; i++)
    {
        cin >> minutes >> templ;
        mymap[templ].push_back(minutes);
    }
    if (mymap[l].size() >= k)
    {
        sort(mymap[l].begin(), mymap[l].end());
        long long ans = 0;
        for (int i = mymap[l].size() - 1; i >= 0; i--)
        {
            if (k != 0)
            {
                ans += mymap[l][i];
                k--;
            }
            else
            {
                break;
            }
        }
        cout <<  ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        playlist();
    }
    return 0;
}