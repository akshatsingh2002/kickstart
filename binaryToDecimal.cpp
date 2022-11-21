#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int bit=0;
    int ans = 0;

    while(n!=0){
        bit = n%10; //// 1001 %10
        
        // cout<<i<<"i";
         ans = ans + bit*pow(2,i);
        n = n /10;
       
        // cout<<"ans"<<ans<<endl;
        i++;


    }
    cout<<ans<<endl;
    return 0;
}