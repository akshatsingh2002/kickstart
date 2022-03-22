#include<bits/stdc++.h>
using namespace std;
int main(){
    int k=0,n=0,w=0;
    cin>>k>>n>>w;
    int tot=0;
    for(int i=1;i<=w;i++){
        
            tot=tot+i*k;
        
    }
    if(tot-n>=0)
cout<<tot-n;
else cout<<"0";
    return 0;
}