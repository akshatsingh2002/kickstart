#include<bits/stdc++.h>
using namespace std;
int main(){
    long long i;
    cin>>i;
    long long arr[i];
    for(long long l=0;l<i;l++){
        cin>>arr[l];
    }
    sort(arr,arr+i);
       for(long long l=0;l<i;l++){
        cout<<arr[l]<<" ";
    }


    return 0;
}