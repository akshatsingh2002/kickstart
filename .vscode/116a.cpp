#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,b,cap=0,max=0;
    cin>>n;
    for(long long i=0;i<n;i++){
        cin>>a>>b;
        cap=cap-a;
        cap=cap+b;
        if(max<cap)
        max=cap;
    }
    cout<<max;
    return 0;
}