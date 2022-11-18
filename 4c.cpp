#include<iostream>
#include<string>
using namespace std;

int main(){
    long long n;
    cin>>n;
    string names[n];
    for(long long i=0;i<n;i++){
        cin>>names[i];
    }

     for(long long i=0;i<n;i++){
        cout<<names[i]<<endl;
    }
    return 0;
}   