#include<bits/stdc++.h>
using namespace std;
void water(){
    long long a , b , c;
    cin>>a>>b>>c;
    if((a+b+c)<=1){
        cout<<"Water filling time "<<endl;
    }
    else{
        cout<<"Not now"<<endl;
    }
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        water();
    }

    return 0;
}