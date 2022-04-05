#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    transform(t.begin(),t.end(),t.begin(),::tolower);
    int k=0;
    long l=s.length();
    long l2=t.length();
    if(l==l2){
    for(long i=0,j=l-1;i<l;i++,j--){
    if(s.at(i)==t.at(j)){
        k=1;
    }
    else{
        k=0;
        break;
    }
    
    }
    }
    if(k==1)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}