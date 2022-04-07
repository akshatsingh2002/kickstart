#include<bits/stdc++.h>
using namespace std;
int main(){
    bool b=false;
    string s;
    cin>>s;
    long long l=s.length();
    for(long long i=0;i<l;i++){
         if(s.at(i)=='H'){
         b=true;
         break;
         }
          if(s.at(i)=='Q'){
         b=true;
         break;
         }
          if(s.at(i)=='9'){
         b=true;
         break;
         }
         
    }
    if(b==true)
    cout<<"YES";
    else 
    cout<<"NO";
    return 0;
}