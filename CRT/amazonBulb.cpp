#include<iostream>
using namespace std;
int main(){
    int arr[12]={0};
    int pos[3]={2,5,7};
    int pow[3]={1,0,2};
    arr[2-1]=1;
    arr[2+1+1]=-1;
    arr[5]=1;
    arr[7-2]=1;
    arr[7+2+1]=-1;
    int pre[12]={0};
    int sum = 0;
    for(int i=0;i<12;i++){
        sum =sum +arr[i];
        pre[i]=sum;
        cout<<pre[i]<<" ";
    }
    int ans = 0;
    for(int i=0;i<12;i++){
        if(pre[i]==0){
            ans ++;
        }
    }
    cout<<endl;
    cout<<ans<<endl;

    return 0;
}