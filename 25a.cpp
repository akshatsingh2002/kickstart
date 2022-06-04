#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int diff=arr[1]-arr[0];
   for(int i=2;i<n;i++){
       if(arr[i]-arr[i-1]!=diff){
           cout<<i;
           break;
       }
   }
    return 0;
}