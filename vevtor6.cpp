#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec;
    int x,n,value;
    cout<<"ENter the number of elements";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }
    for(auto y:vec){
        cout<<y<<endl;
    }
    vector<int>::iterator it;
    for(auto it=vec.rbegin();it!=vec.rend();it++){
        cout<<*it<<endl;
    }
    cout<<"Enter the number you wnat to search";
    cin>>value;
    int i=0;
     for(it=vec.begin();it!=vec.end();it++,i++){
        if(*it==value){
            cout<<"Value present at"<<i;
            break;
        }
    
    }
    auto lb=lower_bound(vec.begin(),vec.end(),value);
    auto ub=upper_bound(vec.begin(),vec.end(),value);
    return 0;
    cout<<lb-vec.begin();
    cout<<ub-vec.begin();
return 0;
}