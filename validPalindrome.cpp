#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s)
{
    // transform(s.begin(), s.end(), s.begin(), ::tolower);
    // string newstr;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if ((s[i] >= 'a' && s[i] <= 'z') || (int(s[i]) >= 48 && int(s[i]) <= 57))
    //     {
    //         newstr = newstr + s[i];
    //     }
    // }
    // int i = 0, l = newstr.length() - 1;
    // cout<<newstr<<endl;
    // while (i < l)
    // {
    //     if (newstr[i] != newstr[l])
    //     {
    //         return 0;
    //     }
    //     i++;
    //     l--;
    // }
    // return 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s.erase(i, 1);
        }
        else if ((s[i] <= 'A' && s[i] >= 'Z') && (s[i] <= 'a' && s[i] >= 'z') && (int(s[i]) <= 48 && int(s[i] >= 57)))
        {
            s.erase(i, 1);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';
        }
    }
    cout << s << endl;
}

int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        getline(cin, s);
        cout << checkPalindrome(s) << endl;
    }
    return 0;
}