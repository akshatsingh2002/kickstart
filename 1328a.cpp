#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  n;
cin>>n;
  long long  arr[2][n];
    for(long long  i=0;i<n;i++){
        cin>>arr[0][i];
        cin>>arr[1][i];
        if(arr[0][i]%arr[1][i]!=0)
        cout<<arr[1][i]-(arr[0][i]%arr[1][i])<<endl;
        else cout<<0<<endl;
    }

  
    return 0;
}