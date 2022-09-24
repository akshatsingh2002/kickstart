#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int count=0;
        int n;
        
        cin>>n;
        int arr[n];

        for(int j=0;j<n;j++){
            cin>>arr[j];
        }

        sort(arr,arr+n);

        // for(int j=0;j<n;j++){
        //     cout<<arr[j];
        // }

        for(int k=0;k<n;k++){

        
                count=count+abs(arr[k]-arr[n/2]);
                // cout<<count;

        
            // cout<<countarr[k]<<endl;
         
        }
        cout<<count;
 


        }
    

    return 0;
}