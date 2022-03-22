#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int count=0,rep=0;
 cin>>s;
    long l=s.length();
    sort(s.begin(),s.end()-1);

    for(long i=0;i<l-1;i++){
        count=0;
        for(long j=i+1;j<l;j++){
            
        if(s.at(i)==s.at(j)){
            count++;
        
        }
        }
       rep=rep+count;
    }
 
long ans=l-rep;
if(ans%2==0)
cout<<"CHAT WITH HER!";
else 
cout<<"IGNORE HIM!";
    return 0;
}