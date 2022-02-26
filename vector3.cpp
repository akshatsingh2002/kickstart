#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string name;
    vector<string> v1;
    cout<<"Enter the number of students";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>name;
v1.push_back(name);
    }
    for(string y:v1){
        cout<<y<<endl;;
    }
    if(n>3){
        cout<<v1.back();
    }
    cout<<"Student at 2nd position is "<<v1.at(1);
    return 0;
}