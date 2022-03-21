#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int count=0,rep=0;
 cin>>s;
    int l=s.length();
    sort(s.begin(),s.end()-1);

    for(int i=0;i<l-1;i++){
        count=0;
        for(int j=i+1;j<l;j++){
            
        if(s.at(i)==s.at(j)){
            count++;
        
        }
        }
       rep=rep+count;
    }
 
int ans=l-rep;
if(ans%2==0)
cout<<"CHAT WITH HER!";
else 
cout<<"IGNORE HIM!";
    return 0;
}