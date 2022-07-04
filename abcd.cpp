#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=s.length();
    sort(s.begin(),s.end());
for(int i=1;i<l;i++){
    if(s.at(i)!=s.at(i-1)){
        cout<<s.at(i-1);
    }
}

    return 0;
}