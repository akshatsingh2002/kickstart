#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void func()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    if (s == "yes")
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    cout << endl;
}
int main()
{
    long long a;
    cin >> a;
    while (a--)
    {
        func();
    }
    return 0;
}