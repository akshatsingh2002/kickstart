#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int j;
    int arr[n][j];
    for(int i=0;i<n;i++){
        for(int k=0;k<j;k++){
            cin>>arr[i][k];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int k=0;k<j;k++){
            cout<<arr[i][k];
        }
    }
return 0;
}