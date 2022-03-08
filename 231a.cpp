#include<bits/stdc++.h>
using namespace std;
int main(){
int n,result=0;
cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<1;j++){
            if(arr[i][j]+arr[i][j+1]+arr[i][j+2]>=2){
                result++;
            }
        }
    
    }
    cout<<result;

return 0;
}
