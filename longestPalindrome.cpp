#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int longestPalindrome(string s)
{
    sort(s.begin(), s.end());
    long long ans = 0;
    for (int i = 1; i < s.size();)
    {
        if (s[i] == s[i - 1])
        {
            ans += 2;
            i = i + 2;
        }
        else{
            i++;
        }
    }
    if (ans == s.size())
    {
        return ans;
    }
    else
    {
        return ans + 1;
    }

    // map<char,int> mp;
    //     for(auto itr:s)
    //     {
    //         mp[itr]++;
    //     }
    //     bool extra=0;
    //     int ans=0;
    //     for(auto itr:mp)
    //     {
    //         ans+=itr.second/2;
    //         extra += itr.second%2;
    //     }
    //     ans*=2;
    //     if(extra)
    //     {
    //         ans++;
    //     }
    //     return ans;
    // }
}

int main()
{
    string s;
    cin >> s;
    int val = longestPalindrome(s);
    cout << val << endl;
    return 0;
}
