#include<iostream>
using namespace std;
void myPrint(int n){
    for(int i =1;i<=n;i++){
        cout<<n<<" ";
    }
    cout<<endl;
}
int main(){
    int n = 122;
    myPrint(n);

    return 0;
}