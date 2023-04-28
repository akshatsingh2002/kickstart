#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isPalindrome(string s)
{
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==' '){
            continue;
        }
        else if(s[i]>='A' || s[i]<='Z'){
            cout<<" transformation working"<<endl;
            ans = ans + char(int(s[i])+32);
        }
        else  if(s[i]>='a' || s[i]<='z'){
            ans = ans + s[i];
        }
        

    }
    cout<<ans<<endl;
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
    getline(cin,s);
    cout<<isPalindrome(s);
    return 0;
}