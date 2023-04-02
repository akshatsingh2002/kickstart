#include <iostream>
#include <string>
using namespace std;
int target()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int resulting = 0;
    int con = 0;
    for(int i = 0;i<n;i++){
        if(s[i]!=s[0]){
            resulting = i;
            break;
        }
    }
    int min = int(s[0]);
    int skip = 0;
    for(int i = resulting;i<n;i++){
        if(int(s[i])<=min){
            con = 1;
            skip = i;
        }
        else if(s[i]=='a'){
            skip = i ;
            con = 1;
            break;
        }
    }
    if(con = 1)
    cout<<s[skip];
    for(int i=0;i<n;i++){
        if(con == 1 && i!=skip){
            cout<<s[i];
        }
    }
    cout<<endl;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        target();
    }
    return 0;
}