#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    vector<int> v1;
    cout<<"Enter the number of elements";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
v1.push_back(x);
    }
    for(int y:v1){
        cout<<y;
    }
    return 0;
}