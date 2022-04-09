#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,k;
    cin>>s>>k;
    long long l=s.length();
    for(long long i=0;i<l;i++){
        if(s.at(i)==k.at(i))
        cout<<0;
        else 
        cout<<1;
    }
    return 0;
}