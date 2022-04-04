#include<bits/stdc++.h>
using namespace std;
int main(){
    long long s;
    cin>>s;

    long long count=0, k=0;
    while(s<0){
        if(s%10==4||s%10==7){
            count++;
        }
        else k=1;
        s=s/10;
    }
    if(k==0){
        cout<<"YES";
    }
    else{
    if(count==4||count==7)
        cout<<"YES";
        else 
        cout<<"NO";
        
    }
    return 0;
}