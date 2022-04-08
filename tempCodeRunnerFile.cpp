#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long arr[n];
    long long a=1;
    long long count1;
    if(n&2!=0)
    count1=(n/2)+1;
    else 
    count1=n/2;
    for(long long i=0;i<count1;i++){
        arr[i]=a;
        a=a+2;
    }
    a=2;
     for(long long i=count1;i<n;i++){
        arr[i]=a;
        a=a+2;
    }
    cout<<arr[k-1];
    return 0;
}