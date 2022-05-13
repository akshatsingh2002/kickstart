#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=1,n;
    cin>>n;
    vector<int> arr;
    int a,b;
cin>>a;
for(int i=0;i<a;i++){
    cin>>b;
    arr.push_back(b);
}
cin>>a;
for(int i=0;i<a;i++){
    cin>>b;
    arr.push_back(b);
}
sort(arr.begin(),arr.end()-1);
int s=arr.size();
for(int i=1;i<arr.size();i++){
    if(arr.at(i)!=arr.at(i-1))
    count++;
    
}
if(count==n)
cout<<"I become the guy.";
else
cout<<"Oh, my keyboard!";
    return 0;
}