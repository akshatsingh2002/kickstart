#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> arr;
    for(int i=0;i<2;i++){
        string temp;
        cin>>temp;
        arr.push_back(temp);
    }
    auto value1=arr[0].end();
    auto value2=arr[1].end();
    cout<<*value1<<*value2;
    if(int(*value1)+32==int(*value2)||int(*value1)-32==int(*value2)){
        cout<<"0";
    }
    else if(int(*value1)<int(*value2)){
cout<<"-1";
    }
    else{
    cout<<"1";
    }
    return 0;
}