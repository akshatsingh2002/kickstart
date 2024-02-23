#include<iostream>
using namespace std;
int sum(int a,int b){
    return a + b;
}
int sum(int a,int b,int c){
    return a +b + c;
}
int main(){
    int a=1,b=2,c=3;
    cout<<sum(a,b);
    cout<<sum(a,b,c);
    return 0;
}