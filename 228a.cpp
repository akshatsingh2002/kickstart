#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[10000];
int n=0,i=0,count=0;
while(1){
  cin>>arr[i];
  if(cin.get()=='\n'){
    break;
  }
  else {
  i++; n++;
}
}
sort(arr,arr+n+1);
for(int j=0;j<n+1;j++){
  if(arr[j]==arr[j-1])
  count++;

}
cout<<count;
  return 0;
}