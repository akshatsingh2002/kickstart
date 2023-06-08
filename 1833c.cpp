#include<iostream>
using namespace std;
void beautiful(){
    long long n;
    cin>>n;
    if(n==1){
        cout<<"YES"<<endl;
    }
    else{
    long long arr[n];
    int odd_count = 0;
    for(long long i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2!=0){
            odd_count++;
        }
    }
    if(odd_count>1 || odd_count==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        beautiful();
    }
    return 0;
}