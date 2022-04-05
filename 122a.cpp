#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,f=0;
    cin>>n;
    if(n%4==0)
    cout<<"YES";
    else if(n%7==0)
    cout<<"YES";
    else if(n%47==0)
    cout<<"YES";
    else{
    while(n>0){
        if(n%10==7||n%10==4){
            n=n/10;
            f=1;
        }
        else{
            f=0;
            break;
        }
    }
    if(f==1)
    cout<<"YES";
    else
    cout<<"NO";
    }
    return 0;
}