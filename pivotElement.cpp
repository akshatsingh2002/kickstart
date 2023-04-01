#include<iostream>
using namespace std;
void pivot(int arr[],int size){
    int start =0;
    int end = size - 1;
    int mid = start + (end - start ) / 2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid + 1 ;
        }
        else {
            end = mid; 
        }
        mid = start +(end - start) / 2;

    }
    cout<<end<<endl;
}
int main(){
    int arr[11]={9,10,11,12,13,14,15,16,1,2,3};
    pivot(arr,11);
    return 0;
}