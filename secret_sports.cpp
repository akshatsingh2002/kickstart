#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void function(){
    int l;
    cin>>l;
    string s;
    cin>>s;
    
    sort(s.begin(),s.end());
    int c1=0;
    for(int i=0;i<l;i++){
        if(s[i]=='A'){
            c1++;
        }
        else{
            break;
        }
    }
    if(c1<(l/2)+1){
        cout<<"B"<<endl;
    }
    else if(c1>=(l/2)+1){
        cout<<"A"<<endl;
    }
    else{
        cout<<"?"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        function();
    }
    return 0;
}