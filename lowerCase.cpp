#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool checkPalindrome(string s){
    int con = 0;
    for(int i=0;i<s.length();i++){
        if(int(s[i])>=48 && int(s[i])<=57){
            continue;
        }
        else if(int(s[i])>=97 && int(s[i])<=122){
            continue;
        }
        else{
            s.erase(i,1);
        }
    }
    cout<<s<<endl;
    int i=0;
    int l = s.length()-1;
    while(i<l){
        cout<<i<<" "<<l<<endl;
        cout<<s[i]<<" "<<s[l]<<endl;
        if(s[i]==s[l]){
            con = 1;
        }
        else{
            con = 0;
            break;
        }
        i++;
        l--;
    }
    return con;

}


int main(){
    string s;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<checkPalindrome(s);
    return 0;
}
