#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,count=1;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    for(long long i=1;i<n;i++){
        if(arr[i]!=arr[i-1])
        count++;
    }
    cout<<count;
    return 0;
}