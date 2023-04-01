#include<iostream>
using namespace std;
int  mountain(int arr[],int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start ) / 2;
    while(start<=end){
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid - 1]){
            return mid;
        }
        else if(arr[mid]>arr[mid-1]){
            start = mid ;
        }
        else if(arr[mid]>arr[mid+1]){
            end = mid ;
        }
        mid = start + (end - start ) / 2;
    }
    return 0;
}
int main(){
    int arr[5]={10,5,3,2,110};

    int ans = mountain(arr,5);
    cout<<ans<<endl;
    return 0;
}