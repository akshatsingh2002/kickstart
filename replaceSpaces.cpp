#include<iostream>
#include<string>
using namespace std;
void replace1(string s){
    string l;
    for(int i=0;i<s.length();i++){
        if(s.at(i)==' '){
            l = l + "@40";
        }
        else{
            l = l + s[i];
        }
    }
    cout<<l<<endl;
}
int main(){
    string s;
    getline(cin,s);
    replace1(s);
    return 0;
}