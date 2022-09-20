#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int j,count=0;
    cin>>n;
   
    for(int i=0;i<n;i++){
        cin>>j;
         int *arr1 = new int[j];
         int *arr2 = new int[j];
        for(int k=0;k<j;k++){
            cin>>arr1[k];
        }
        for(int k=0;k<j;k++){
            cin>>arr2[k];
        }
         for(int f=0;f<j;f++){
        if(f==0){
            if(arr1[f]>=arr2[f])
            count++;
        }
        else if((arr1[f]-arr1[f-1])>=arr2[f])
        count++;
    }
    cout<<count;
    delete arr1,arr2;
    count=0;


    }
   

return 0;
}