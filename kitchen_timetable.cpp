#include<iostream>
using namespace std;
int main(){
    int t,count=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int n=0;
        cin>>n;
        n=n+1;
        int arr1[n],arr2[n];
        arr1[0]=0;
        arr2[0]=0;
        for(int j=1;j<=n;j++){
            cin>>arr1[j];
        }
        for(int j=1;j<=n;j++){
            cin>>arr2[j];
        }
        for(int j=1;j<=n;j++){
            if((arr1[j]-arr1[j-1])>=arr2[j])
            count++;
        }
        
        cout<<count;
        count=0;
    }
    return 0;
}