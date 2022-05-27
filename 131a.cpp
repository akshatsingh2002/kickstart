#include<bits/stdc++.h>
using namespace std;
int main(){
    int scn=0;
 string s;
 cin>>s;
 int l=s.length();
 if(l>1){
for(int i=0;i<l;i++){
    if(int(s.at(i))<=90){
        scn=1;
    }
    else{
        scn=0;
        break;
    }
}
if(scn==1){
    for(int i=0;i<l;i++){
        s.at(i)=s.at(i)+32;
    }
}
for(int i=1;i<l;i++){
    if(s.at(0)>90&&s.at(i)<=90){
        scn=2;
    }
    else{
        scn=0;
        break;
    }
}

if(scn==2){
    s.at(0)=s.at(0)-32;
    for(int i=1;i<l;i++){
        s.at(i)=s.at(i)+32;
    }
}
}

 if(l==1&&int(s.at(0))<=90)
    s.at(0)=s.at(0)+32;
else if(l==1&&int(s.at(0))>90)
s.at(0)=s.at(0)-32;




cout<<s;

    return 0;
}