#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    long result=0;
    long l=s.length();
   for( int i=1;i<l;i++){
    if(s.at(i-1)==s.at(i)){
result++;
    }
    else if(result>=6)
    break;
    else result=0;

   }
   if(result>=6)
   cout<<"YES";
   else cout<<"NO";
return 0;
}