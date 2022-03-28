#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    int l=s.length();
    
    for(int i=0;i<l;i++){
      if(s.at(i)!='a'&&s.at(i)!='e'&&s.at(i)!='i'&&s.at(i)!='o'&&s.at(i)!='u'&&s.at(i)!='y')
      cout<<"."<<s.at(tolower(i));
     
    }
    
    return 0;
}