#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,count=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
 int m=*max_element(arr,arr+n);
 int indxm=0;
 if(m==arr[0]){
   count=0;
 }
else{
  for(int i=0;i<n;i++){
    if(arr[i]==m){
      indxm=i;
      break;
    }
  }

for(int i=indxm;i>0;i--){
  swap(arr[i],arr[i-1]);
  count++;
}
}
 int mn=*min_element(arr,arr+n);
 int indxmn=0;
 if(mn==arr[n-1]){
   count=count+0;
 }
else{
  for(int i=0;i<n;i++){
    if(arr[i]==mn){
      indxmn=i;
    }
  }

for(int i=indxmn;i<n-1;i++){
  swap(arr[i],arr[i+1]);
  count++;
}
}
cout<<count;
 
  return 0;
}