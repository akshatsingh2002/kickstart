#include <bits/stdc++.h> 
using namespace std;
bool checkPalindrome(string s)
{
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    string newstr;
    for(int i=0;i<s.size();i++){
        if(int(s[i]>=97 && int(s[i])<=122)){
            newstr = newstr + s[i];
        }
    }
    cout<<newstr<<endl;
}

int main(){
    string s="N2 i&nJA?a& jnI2n";
    checkPalindrome(s);
    return 0;
}