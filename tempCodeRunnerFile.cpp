#include <iostream>
#include <string>
using namespace std;
void possible()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int con = 0;
    for(int i=2;i<n;i++){
        if(s[i]==s[i-1]==s[i-2]){
            con = 0;
            break;
        }
        else{
            con = 1;
        }
        }
    
    if (con == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        possible();
        n = n - 1;
    }
    return 0;
}