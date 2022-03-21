#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int count=0,rep=0;
    cin>>s;
    int l=s.length();
    sort(s.begin(),s.end()-1);
    cout<<s;
    for(int i=0;i<l-1;i++){
        
        for(int j=i+1;j<l;j++){
            count=1;
        if(s.at(i)==s.at(j)){
        break;
        
        }
        }
       rep=count+rep;
    }
    cout<<rep;
    return 0;
}