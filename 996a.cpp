#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    if(n>=100){
        count=n/100;
        n=n%100;
    }
   
    if(n>=20){
        count=count+n/20;
        n=n%20;
    }
        
    if(n>=10){
        count=count+n/10;
        n=n%10;
    }
        
    if(n>=5){
        count=count+n/5;
        n=n%5;
    }
        
    if(n>=1){
        count=count+n/1;
        n=n%1;
    }
       
   cout<<count;

    return 0;
}