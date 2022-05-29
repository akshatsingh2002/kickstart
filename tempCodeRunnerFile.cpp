#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    string s;
    cin>>s;
    int l=s.length();
 for(int i=0;i<l-3;){
     if(s.at(i)=='W'&&s.at(i+1)=='U'&&s.at(i+2)=='B'){
         s.at(i)='\0';
         s.at(i+1)='\0';
         s.at(i+2)='\0';
         i=i+3;
         if(count==1){
             cout<<' ';
         }
     }
     else{
         count=1;
         cout<<s.at(i);
         i++;
         }
     }
 

    return 0;
}