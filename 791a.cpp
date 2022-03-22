#include<bits/stdc++.h>
using namespace std;
 int main(){
     int a,b,year=0;
     cin>>a>>b;
     while(a<=b){
         year++;
         b=b*2;
         a=a*3;

     }
     cout<<year;
     return 0;
 }