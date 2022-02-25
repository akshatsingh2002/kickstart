#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a(4,2);
    for(int x:a){
        cout<<x<<endl;
    }
    a.push_back(3);
    a.push_back(2);
    a.push_back(4);
    for(int x:a){
        cout<<x<<endl;
    }
    cout<<"\nThe capacity is"<<a.capacity();
    cout<<"\nThe size is"<<a.size();
cout<<"\nElement at the 2nd position is "<<a.at(1);
cout<<"\nElement at the beginning is"<<a.front();
cout<<"\nElement at the back is"<<a.back();
a.pop_back();
a.pop_back();
cout<<endl;
for(int x:a){
        cout<<x<<endl;
    }
    return 0;
    }