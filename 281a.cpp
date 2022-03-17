#include<bits/stdc++.h>
using namespace std;
 int main(){
 string s;
 cin>>s;
 int l=s.length();
 char arr[l];
 for(int i=0;i<l;i++){
     arr[i]=s.at(i);
 }
 if(int(arr[0]>=97)){
 char temp=arr[0];
 temp=int(temp-32);
 arr[0]=temp;
 }
 for(int i=0;i<l;i++){
     cout<<arr[i];
 }
     return 0;
 }