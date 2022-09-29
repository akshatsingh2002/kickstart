#include<iostream>
#include<algorithm>
#include <iomanip>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,a,b;
        cin>>n>>a>>b;
        int distinct;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[n];
        }
        sort(arr,arr+n);
        for(int j=1;j<=n;j++){
        if(arr[j]!=arr[j-1]){
            distinct++;
        }
        }
        cou--t<<distinct;
        cout<<setprecision(7)<<1/distinct;
    }
    return 0;
}