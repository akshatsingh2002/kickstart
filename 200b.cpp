#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  n;
    float sum=0;
    cin>>n;
    float arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
        arr[i]=arr[i]/100;
        sum=sum+arr[i];
    }
cout<<float((sum/n)*100);
    return 0;
}