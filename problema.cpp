#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
   for(long long i=0;i<n;i++){
       long long j=1;
       long long x=arr[i];
       while((x&j<=0)){
           j++;
       }
       cout<<j;
   }
    return 0;
}