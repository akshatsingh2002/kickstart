#include<iostream>
using namespace std;



void sum(){
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    if(arr[0]==arr[1]+arr[2] || arr[1]==arr[0]+arr[2] || arr[2]==arr[1]+arr[0]){
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
    // for(int i=0;i<3;i++){
    //     cout<<arr[i];
    // }
}

int main(){
int long long n;
cin>>n;
int i = 0;
while(i<n){
sum();
i++;
}

    return 0;
}