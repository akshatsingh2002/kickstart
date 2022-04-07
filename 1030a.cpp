#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,con=0;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    for(long long i=0;i<n;i++){
        if(arr[i]==1){
            con=1;
        break;
        }
        else con=0;
    }
    if(con==0){
        cout<<"EASY";
    }
    else
    cout<<"HARD";
    return 0;
}