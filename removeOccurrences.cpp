#include <iostream>
#include <string>
using namespace std;
string myRemove(string s, string part){
    int l = part.length();
    string temp;
    for(int i=0;i<s.length();i++){
        temp=s.substr(i,l);
        if(temp == part){
            s.erase(i,l);
            return myRemove(s,part);
        }
    }
    return s;
}
string removeOccurrences(string s, string part)
{
    string newstr = myRemove(s,part);
    cout<<newstr<<endl;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    removeOccurrences(s1, s2);
    return 0;
}