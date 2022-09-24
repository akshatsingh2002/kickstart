#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main(){
    int t;
    cin>>t;
    int middle;
    
    for(int i=0;i<t;i++){
        int count=0;
        int n;
        
        cin>>n;
        int arr[n];
        int countarr[n];

        for(int j=0;j<n;j++){
            cin>>arr[j];
        }

        sort(arr,arr+n);

        // for(int j=0;j<n;j++){
        //     cout<<arr[j];
        // }

        if(n%2==0){
         middle = arr[n/2];
        }
        else
        middle = arr[(n-1)/2];
        

        for(int j=0;j<n;j++){
            if(arr[j]==middle)
            count++;
        }
        cout<<n-count;

        }


    return 0;
}