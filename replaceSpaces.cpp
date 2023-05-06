#include<iostream>
#include<string>
using namespace std;
string replaceSpaces(string &s){
	string l= "";
    for(int i=0;i<s.length();i++){
        if(s.at(i)==' '){
            l.push_back('@');
            l.push_back('4');
            l.push_back('0');
        }
        else{
            l.push_back(s[i]);
        }
    }
	return l;
}
int main(){
    string s;
    getline(cin,s);
    cout<<replaceSpaces(s);
    return 0;
}