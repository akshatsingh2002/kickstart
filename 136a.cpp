#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
  for(int k=1;k<=n;k++){
      for(int i=1;i<=n;i++){
          if(arr[i]==k){
              cout<<i<<" ";
          }
      }
  }
    
    return 0;
}