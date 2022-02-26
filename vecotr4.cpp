#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    int n,x;
    cout<<"Enter the size of array ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
for(auto y:arr){
cout<<y;
}
    return 0;
}