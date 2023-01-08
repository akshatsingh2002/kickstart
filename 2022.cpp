#include<iostream>
#include<algorithm>
using namespace std;
void maximum(){
int n,m;
cin>>n>>m;
long long arr[n],arr2[m],max=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<m;i++){
    cin>>arr2[i];
}
sort(arr2,arr2+m);
for(int i=0;i<n;i++){
    if(i<m&&arr[i]<arr2[m-i-1])
    max = max + arr2[m-i-1];
    else 
    max = max + arr[i];
}
if(n==m==1){
    cout<<arr2[0]<<endl;
}
else 
cout<<max<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t!=0){
        maximum();
        t=t-1;
    }
    return 0;
}