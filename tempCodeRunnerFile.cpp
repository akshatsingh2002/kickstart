#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    long long n=0,con1=0,k=0;
    int f=0;
    cin>>s;
    long long l=s.length();
    for(long long i=0;i<l;i++){
        if(s.at(i)=='7'){
            f=1;
            con1=1;
            
            }
             if(s.at(i)=='4'){
            f=1;
        
            }
            else{
           k=1;
            }
          
        
    }
    for (long long i=0;i<l;i++){
        if(s.at(i)=='4'||s.at(i)=='7'){
            n++;
        }
    }
    if(k==1){
string g=to_string(n);
long long k=g.length();
for(long long i=0;i<k;i++){
        if(g.at(i)=='7'||g.at(i)=='4'){
            f=1;
            }
            else {
                f=0;
            break;
            }
        
    }
    }
  

if(f==1&&l>=2&&con1==1)
cout<<"YES";
else
cout<<"NO";
    
    return 0;
}