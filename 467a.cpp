#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,count=0;
cin>>n;
long long arr1[n],arr2[n];
for(long long i=0;i<n;i++){
    cin>>arr1[i]>>arr2[i];
}
for(long long i=0;i<n;i++){
    if(arr1[i]+2<=arr2[i]){
        count++;
    }
}
cout<<count;
    return 0;
}