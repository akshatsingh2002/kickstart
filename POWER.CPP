#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    for(;i<n;){

        if(i<n){
        i=2*i;
        }
        else 
        break;
    }
    if(i==n)
    cout<<i;
    else
    i=i/2;
    cout<<i;
    return 0;
}