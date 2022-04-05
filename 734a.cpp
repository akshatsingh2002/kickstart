#include<bits/stdc++.h>
using namespace std;
int main(){
    long long l;
    cin>>l;
    string s;
    cin>>s;
    long long a=0,d=0,f=0;
for(long long i=0;i<l;i++){
    if(s.at(i)=='A'){
        a++;
    }
    else if(s.at(i)=='D')
    d++;
    else
    f++;
}
if(a>d&&a>f)
cout<<"Anton";
else if(d>a&&d>f)
cout<<"Danik";
else
cout<<"Friendship";
    return 0;
}