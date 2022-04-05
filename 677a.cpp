#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,h,ans=0;
    cin>>n>>h;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    for(long long i=0;i<n;i++){
     if(arr[i]<=h)
     ans++;
    else 
    ans=ans+2;
    }
    cout<<ans;

    return 0;
}