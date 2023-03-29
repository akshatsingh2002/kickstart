#include<iostream>
using namespace std;
void budget(){
    int k;
    cin>>k;
    cout<<k*100<<endl;
}
int main(){
    int n;
    cin>>n;
    while(n!=0){
        budget();
        n = n - 1;
    }
    return 0;
}