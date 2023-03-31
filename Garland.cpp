#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void garland()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    if (s[0] == s[1] && s[0] == s[1] && s[0] == s[3])
    {
        cout << -1 << endl;
    }
    else if ((s[0] == s[1] && s[1] == s[2]) || (s[1] == s[2] && s[2] == s[3]))
    {
        cout << 6 << endl;
    }
    else
        cout << 4 << endl;
}

int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        garland();
        n = n - 1;
    }
    return 0;
}
