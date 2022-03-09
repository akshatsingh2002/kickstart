#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,result=0;
    vector<string> arr;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        arr.push_back(s);
    }
    for(int i=0;i<n;i++){
        if(arr[i]=="++X"||arr[i]=="X++"){
result++;
        }
        else
        result--;
    }
    cout<<result;
    return 0;
}