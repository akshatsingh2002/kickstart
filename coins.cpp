#include<iostream>
using namespace std;
void coins(){
    int fval,k;
    cin>>fval>>k;
    if(fval % 2 == 0){
        cout<<"YES"<<endl;
    }
    else if(k%2==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        coins();
    }

    return 0;
}
