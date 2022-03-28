#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    long l=s.length();
    
    for(long i=0;i<l;i++){
      if(s.at(i)!='a'&&s.at(i)!='e'&&s.at(i)!='i'&&s.at(i)!='o'&&s.at(i)!='u'&&s.at(i)!='y')
      cout<<"."<<s.at(i);
     
    }
    
    return 0;
}