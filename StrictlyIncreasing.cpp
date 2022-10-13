#include<iostream>
#include<algorithm>
using namespace std;
void calc(){
    int size,condition=0;
    cin>>size;
    int arr[size];
    for(int j=0;j<size;j++){
        cin>>arr[j];
    }
    sort(arr,arr+size);
    for(int j=1;j<=size;j++){
        if(arr[j]>arr[j-1]){
            condition = 1;
        }
        else{
            condition = 0;
            break;
        }
    }
    if(condition==1)
    cout<<"YES"<<endl;
    else
    cout<<"No"<<endl;

}

int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        calc();
        i++;
    }
    
    
    
    return 0;
}