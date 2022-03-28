#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,sum=0;
    cin>>n;
    long long arr[n][3];
    for(long long i=0;i<n;i++){
        for(long long j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(long long i=0;i<n;i++){
        for(long long j=0;j<3;j++){
            sum=sum+arr[i][j];
        }
    }
   
    if(sum==0)
    cout<<"YES";
    else 
    cout<<"NO";
    return 0;
}