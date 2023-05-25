#include <iostream>
#include<algorithm>
using namespace std;
void myreverse(int arr[],int n){
    cout<<"revese working"<<endl;
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
    cout<<"returning contorl"<<endl;
}
int main() {
    cout<<"Main"<<endl;
    int arr[5] = {1,2,3,4,5};
    myreverse(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}