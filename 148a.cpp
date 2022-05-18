#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n,d,count=0;
    cin>>k>>l>>m>>n>>d;
    long long arr[d];
    for(int i=1;i<=d;i++){
        arr[i]=i;
    }
    for(int i=1;i<=d;i++){
        if(arr[i]%k==0){
            arr[i]=0;
        count++;
        }

    }
    for(int i=1;i<=d;i++){
        if(arr[i]%l==0&&arr[i]!=0){
            arr[i]=0;
        count++;
        }

    }
     for(int i=1;i<=d;i++){
        if(arr[i]%m==0&&arr[i]!=0){
            arr[i]=0;
        count++;
        }

    }
     for(int i=1;i<=d;i++){
        if(arr[i]%n==0&&arr[i]!=0){
            arr[i]=0;
        count++;
        }

    }
    cout<<count;
    return 0;
}