#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,sum=0;
    cin>>a;
    long long arr[a];
    for(long long i=0;i<a;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    if(a%2!=0&&sum%4==0&&sum>4)
    cout<<a;
   else if(sum%4==0){
        cout<<sum/4;
    }
    else 
    cout<<sum/4+1;
    return 0;
}