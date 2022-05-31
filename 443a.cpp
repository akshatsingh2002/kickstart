#include<bits/stdc++.h>
using namespace std;
int main(){
    char arr[1000];
    int count=1;
    int j=0;
    for(int i=0;i<1000;i++){
      cin>>arr[i];
      j++;
      if(arr[i]=='}'){
        break;
      }
    }
    if(j==2){
      cout<<0;
    }
    else if(j==3)
    cout<<1;
    else{
    sort(arr,arr+j);
    for(int i=1;i<1000;i++){
      if(arr[i]!=arr[i-1]){
        count++;
      }
      if(arr[i]=='}'){
        break;
      }
    }
    count=count-3;
    cout<<count;
    }
    return 0;
}