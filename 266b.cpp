#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    string s;
    cin >> n >> t >> s;
    while (t--)
    {
        for (int i = 1; i < n; ++i)
        {
            if (s[i] == 'G' && s[i-1] == 'B')
            {
               swap(s[i],s[i-1]);
                ++i;
            }
        }
    }
    cout << s << endl;
    return 0;
}