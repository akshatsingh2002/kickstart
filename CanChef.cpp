#include <iostream>
using namespace std;
void petrol()
{
    long long x, y;
    cin >> x >> y;
    x = x * 15;
    y = y * 2;
    if (x - y >= 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        petrol();
    }
    return 0;
}