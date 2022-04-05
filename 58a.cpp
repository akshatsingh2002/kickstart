#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,g;
    cin>>s;
    int i=0;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    int l=s.length();
 for(;i<l;i++){
    if(s.at(i)=='h'){
        g='h';
        i++;
        break;
    }
 }


 for(;i<l;i++){
    if(s.at(i)=='e'){
        g=g+'e';
         i++;
        break;
    }
 }


 for(;i<l;i++){
    if(s.at(i)=='l'){
       g=g+'l';
        i++;
        break;
    }
 }

 for(;i<l;i++){
    if(s.at(i)=='l'){
       g=g+'l';
        i++;
        break;
    }
 }
 

 for(;i<l;i++){
    if(s.at(i)=='o'){
       g=g+'o';
        i++;
        break;
    }
 }
   

if(g=="hello")
  {
      cout<<"YES";
 }
else cout<<"NO";
    return 0;
}