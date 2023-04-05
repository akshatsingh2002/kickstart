#include <iostream>
#include <string>
using namespace std;
void maxBinary()
{
    int s, n;
    cin >> s >> n;
    string str;
    cin >> str;
    if (str[1] == '0')
    {
        str[0] = '1';
        n--;
    }
    cout << str;
    for (int i = 0; i < n; i++)
    {
        cout << 0;
    }
    cout << endl;
}
int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        maxBinary();
    }
    return 0;
}