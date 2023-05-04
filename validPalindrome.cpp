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
    int l = newstr.size();
    int con = 1;
    for(int i=0;i<l/2;i++){
        if(newstr[i]!=s[l-i-1]){
            con = 0;
            break;
        }
    }
    return con;
}

int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
        getline(cin,s);
        checkPalindrome(s);
    }
    return 0;
}