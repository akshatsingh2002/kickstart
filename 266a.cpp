#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,val=0,min=0;
    cin>>n;
    char arr[n];
    min=n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
         val++;
        
        
        }
    }
    cout<<val;
    return 0;
}