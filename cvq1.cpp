#include<bits/stdc++.h>
using namespace std;
int main(){
    long n,team1=0,team2=0,tot=0;
    cin>>n;
    long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if((team1+arr[i])>arr[i]){
            team1=team1+arr[i];
        }
        else 
        team1=team1+arr[i+2];
    }
    cout<<team1;
    for(int i=n;i>0;i--){
        if((team2+arr[i])>arr[i]){
            team2=team2+arr[i];
        }
        else 
        team2=team2+arr[i-2];
    }
    cout<<team2;
for(int i=0;i<n;i++){
    tot=tot+arr[i];
}
if(team1>team2){
    cout<<tot-team1;
}
else cout<<tot-team2;
    return 0;
}