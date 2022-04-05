#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n%4==0)
    cout<<"YES";
    else if(n%7==0)
    cout<<"YES";
    else if(n%47==0)
    cout<<"YES";
    else 
    cout<<"NO";
    return 0;
}