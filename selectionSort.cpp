#include<iostream>
#include<algorithm>
using namespace std;
int selection(){
        
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i=0;i<n;i++){
        int min = arr[i];
        int swapindex = i;
        for(int j = i + 1 ; j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                swapindex = j;
            }
        }
        swap(arr[swapindex],arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int n;
    cin>>n;
    while(n--){
        selection();
    }
    return 0;
}