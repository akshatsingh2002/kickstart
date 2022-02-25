#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enetr the size of the array";
    cin>>n;
    int *arr=new int(n);//initilizing for the first time//
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Enter the new size "<<endl;
    cin>>n;
    arr=new int(n);//just changing size//
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}