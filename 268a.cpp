#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int arr[2][n];
    for(int i=0;i<n;i++){
        cin>>arr[0][i];
        cin>>arr[1][i];
    }
       for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(arr[0][i]==arr[1][j])
           count++;
       }
    }
    cout<<count;
    return 0;
}