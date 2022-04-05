#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long a=n+1;
    while(a>=n){
    if(a%10!=(a/10)%10&&(a/10)%10!=(a/100)%10&&a%10!=(a/100)%10&&a%10!=(a/1000)%10&&(a/10)%10!=(a/1000)%10&&(a/100)%10!=(a/1000)%10){
    cout<<a;
    break;
    }
    else 
    a++;
    }

    return 0;
}