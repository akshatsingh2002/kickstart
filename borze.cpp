#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void borez()
{
    string s;
    cin >> s;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '.')
        {
            cout << 0;
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            cout << 1;
            i++;
        }
        else
        {
            cout << 2;
            i++;
        }
    }
    cout << endl;
}
int main()
{
    borez();
    return 0;
}