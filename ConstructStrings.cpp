#include <iostream>
#include <string>
using namespace std;
void construct()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n < 3)
    {
        cout << s << endl;
    }
    else
    {
        for (int i = 2; i < n;)
        {
            if (s[i] == s[i - 1] && s[i] == s[i - 2])
            {
                s.erase(i - 2, 2);
            }
            else
            {
                i++;
            }
        }
        cout << s << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        construct();
        n = n - 1;
    }
    return 0;
}