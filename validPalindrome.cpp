#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isPalindrome(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (int(s[i]) >= 48 and int(s[i]) <= 57)
        {
            ans = ans + s[i];
        }
        else if (int(s[i]) >= 97 and int(s[i] <= 122))
        {
            ans = ans + s[i];
        }
    }
    int i = 0;
    int con = 0;
    int l = ans.length() - 1;
    if (l >=1)
    {
        while (i < l)
        {
            if (ans[i] == ans[l])
            {
                con = 1;
            }
            else
            {
                con = 0;
                break;
            }
            i++;
            l--;
        }
        return con;
    }
    else
    {
        return 1;
    }
}

int main(){
    string s;
    cin>>s;
    cout<<isPalindrome(s);
    return 0;
}