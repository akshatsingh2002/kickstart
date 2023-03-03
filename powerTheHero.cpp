#include<iostream>
using namespace std;
void hero(){
    int n;
    cin>>n;
    int arr[n];
    int max = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]!=0){
            sum = sum + arr[i];
        }
        if(arr[i]==0){
            if(sum>max){
                max = sum;
                sum = 0;
            }
        }
    }
    cout<<sum<<endl;
}
int main(){
    int n;
    cin>>n;
    while(n!=0){
        hero();
        n = n - 1;
    }
    return 0;
}