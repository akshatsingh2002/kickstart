#include<iostream>
using namespace std;
void parity(){
    int n;
    cin>>n;
    int ans = 0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i>=1){ 
            if(arr[i]%2==0 && arr[i-1]%2==0)
            ans++;
            else if(arr[i]%2==1 && arr[i-1]%2==1)
            ans++;
        }
    }
    if(n==1)
    cout<<0<<endl;
    else
    cout<<ans<<endl;
    
}
int main(){
    int n;
    cin>>n;
    while(n!=0){
        parity();
        n = n - 1;
    }
}