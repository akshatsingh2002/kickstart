#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int decimal=0;
    int i = 0;
    while(n!=0){
        decimal = n%10*pow(2,i)+decimal;
        n = n /10;
        i++;
    }
    cout<<decimal;
    return 0;
}