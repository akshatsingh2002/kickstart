#include<iostream>
#include <cctype>

using namespace std;
void lamp(){
    string s;

    cin>>s;
    int l = s.length();
    if(l==1){
        cout<<-1<<endl;
    }
    else if(l==2&&(s=="LL"||s=="RR")){
        cout<<-1<<endl;
    }
    else if (l==2&&s=="LR"){
        cout<<1<<endl;
    }
    else if()
}
int main(){
    return 0;
}