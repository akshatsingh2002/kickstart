#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long l=s.length();
    long long low=0,upp=0;
    for(long long i=0;i<l;i++){
if(s.at(int(i))>90)
low++;
 else upp++;
    }
if(low>=upp)
transform(s.begin(),s.end(),s.begin(),::tolower);
else
transform(s.begin(),s.end(),s.begin(),::toupper);
cout<<s;
    return 0;
}