#include<bits/stdc++.h>
using namespace std;
int main(){
   long long n,m,a;
    cin>>n>>m>>a;
    long long side1=n/a;
   long long side2=m/a;
   if(n%a!=0)
   ++side1;
   if(m%a!=0)
   ++side2;
   cout<<side1*side2;
    return 0;
}