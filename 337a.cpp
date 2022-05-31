#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    int dif=1000;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    for(int i=0;i+n<=m;i++){
        int mx=*max_element(arr+i,arr+n+i);
        int mn=*min_element(arr+i,arr+n+i);
        cout<<mx<<' '<<mn<<endl;
        if(dif>=mx-mn){
      dif=mx-mn;
        }
    }
cout<<dif;
    return 0;
}