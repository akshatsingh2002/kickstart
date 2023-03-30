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
    else
    {
        int dis = 1;
        for (int i = 1; i < 4; i++)
        {
            if (s[i] != s[i - 1])
            {
                dis++;
            }
        }
        if (dis >= 4)
        {
            cout << 4 << endl;
        }
        else
        {
            cout << 6 << endl;
        }
    }
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
