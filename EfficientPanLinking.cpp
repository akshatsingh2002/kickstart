#include <iostream>
#include <string>
using namespace std;
void pan()
{
    string s;
    cin >> s;
    string s2;
    int n;
    int l = s.length();
    if (l <= 1)
    {
        cout << s << endl;
    }
    else
    {
        s2 = s2 + s[l - 2];
        s2 = s2 + s[l - 1];
        n = stoi(s2);
        cout << n % 20 << endl;
    }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        pan();
    }
    return 0;
}
