#include <iostream>
#include <string>
using namespace std;
int target()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int resultIndex = 0;
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[0])
        {
            start = i;
            break;
        }
    }
    int min = int(s[start - 1]);
    for (int i = start; i < n; i++)
    {
        if (int(s[i]) <= min)
        {
            cout << s[i];
            resultIndex = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i != resultIndex || resultIndex == 0)
        {
            cout << s[i];
        }
    }
    cout << endl;
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