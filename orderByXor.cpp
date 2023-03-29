#include <iostream>
using namespace std;
void exor()
{
    long long a, b, c;
    cin >> a >> b >> c;
    int con = 0;
    for (long long i = 0; i < 1073741824/10000000; i++)
    {
        if ((a ^ i) < (b ^ i) && (b ^ i) < (c ^ i))
        {
            cout << i << endl;
            con = 1;
            break;
        }
    }
    if (con == 0)
    {
        cout << -1 << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        exor();
        n = n - 1;
    }
    return 0;
}