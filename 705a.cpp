#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    for(long long i=1;i<=n;i++){
        if(i%2==0&&i==n)
        cout<<"I love it ";
        else if(i%2!=0&&i==n)
        cout<<"I hate it ";
        else if(i%2==0)
        cout<<"I love that ";
        else
        cout<<"I hate that ";
    }
    return 0;
}