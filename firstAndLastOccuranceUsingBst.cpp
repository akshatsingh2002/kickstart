#include <iostream>
#include <algorithm>
using namespace std;
// void bs(int arr[], int size, int val) // linear method
// {
//     int intial=-1,final1=-1;
//     for(int i=0;i<size;i++){
//         if(intial == - 1){
//             if(arr[i] == val){
//                 intial = i;
//             }
//         }
//         if(intial != -1 && arr[i] != val){
//             final1 = i - 1;
//             break;
//         }
//     }
//     cout<<intial<< " "<<final1<<endl; 
// }
void firstoccr(int arr[], int size , int val){
    int start = 0;
    int end = size - 1;
    int mid = start +(end - start ) / 2;
    int initial=-1;
    while(start<=end){
        if(arr[mid]==val){
            initial = mid;
            end = mid - 1;
        }
        else if(val<arr[mid]){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end  - start ) / 2;

    }
    cout<<initial;
}
void lastoccr(int arr[], int size , int val){
    int start = 0;
    int end = size - 1;
    int mid = start +(end - start ) / 2;
    int final1=-1;
    while(start<=end){
        if(arr[mid]==val){
            final1 = mid;
            start = start + 1;
        }
        else if(val<arr[mid]){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end  - start ) / 2;

    }
    cout<<final1;
}
int main()
{
    int arr[10] = {1, 2, 3, 3, 3, 5, 5, 6, 7, 8};
    firstoccr(arr, 10, 5);
    lastoccr(arr,10,5);
    return 0;
}
