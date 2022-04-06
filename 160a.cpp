#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,sum=0,c1=0,sum2=0,count=0;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sort(arr,arr+n);
   sum=sum/2;
   for(long long j=n-1;sum2<=sum;j--){
       sum2=sum2+arr[j];
       count++;
   }
   cout<<count;
    return 0;
}