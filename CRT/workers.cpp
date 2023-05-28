#include<iostream>
#include<algorithm>
#include<limits.h>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int max = INT_MIN;
    int index = 0;
    for(int i=1;i<n;i++){
        if(abs(arr[i]-arr[i-1])>max){
            max = abs(arr[i]-arr[i-1]);
            index = i;
        }
    }
    cout<<index<<endl;
    return 0;

}

