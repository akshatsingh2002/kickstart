#include<bits/stdc++.h>
using namespace std;
int main(){
int n,count=1;
cin>>n;
 vector<int> arr;
  long long a,b;
  int data;
  cin>>a;
  for(long long i=0;i<a;i++){
      cin>>data;
      arr.push_back(data);
  }
   cin>>b;
  for(long long i=0;i<b;i++){
       cin>>data;
      arr.push_back(data);
  }
sort(arr.begin(),arr.end()-1);
for(int i=0;i!=arr.size();i++){
    if(arr.at(i)!=arr.at(i-1)){
        count++;
    }
}
     
   if(count==n){
       cout<<"I become the guy.";
   }
   else
   cout<<"Oh, my keyboard!";
    return 0;
}