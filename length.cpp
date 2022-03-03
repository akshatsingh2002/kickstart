#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
vector<string> names;
cin>>n;
for(int i=0;i<n;i++){
    string temp;
    cin>>temp;
    names.push_back(temp);
}
for(int i=0;i<n;i++){
    if(int v=names[i].length()<=10){
        cout<<names[i];
    }
    else {
        auto first=names[i].begin();
        auto last=names[i].end()-1;
        cout<<*first<<names[i].length()-2<<*last;
    }
    cout<<endl;
}
return 0;  
}