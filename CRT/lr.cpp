#include<iostream>
using namespace std;
int main(){
    int arr[10]={0};
    int presum[10]={0};
    int t;
    cout<<"print number of test case : ";
    cin>>t;
    int p=1,n=-1;
    while(t--){
        int l, r;
        
        cin >> l >> r;
        arr[l-1]=p;
        p++;
        arr[r]=n;
        n--;

    }
    cout<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    int sum=0;
    int count = 1;
    for(int i=0;i<10;i++){
        sum = sum + arr[i];
        presum[i]=sum;
    }
    //  for(int i=1;i<10;i++){
    //     presum[i]+=presum[i-1];
    // }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }

    return 0;

}