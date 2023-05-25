#include<iostream>
using namespace std;
void jump(){
    long long x , k; 
    cin>>x>>k;
    if(x%k==0){
        cout<<2<<endl;
        cout<<x-k+1<<" "<<x-(x-k+1)<<endl;
    }
    else{
        cout<<1<<endl;
        cout<<x<<endl;
    }

    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        jump();
    }
    return 0;
}