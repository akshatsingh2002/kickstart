#include<iostream>
using namespace std;
void countof1(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=n-1;i>=0;i--){
        arr[i] = n % 10;
        n = n / 10;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}
int main(){
    int k;
    cin>>k;
    while(k--){
        countof1();
    }
    return 0;
}