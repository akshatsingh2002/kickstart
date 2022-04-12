#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
  getline(cin,s);
  long l=s.length();
  long count=0;
  for(long long i=2;i<l;){
    if(s.at(i)==s.at(i-2))
    count++;
    i=i+2;
  }
  cout<<count;
  return 0;
}