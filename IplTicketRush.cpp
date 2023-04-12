#include <iostream>
using namespace std;
void ipl()
{
    long long n, m;
    cin >> n >> m;
    if (m >= n)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << n - m << endl;
    }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        ipl();
    }
    return 0;
}