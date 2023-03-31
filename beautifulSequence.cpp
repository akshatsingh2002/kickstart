#include <iostream>
using namespace std;
void sequence()
{
    int n;
    cin >> n;
    int val;
    int con = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> val;
        if (val <= i & con == 0)
        {
            con = 1;
        }
    }
    if (con == 1)
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
    int k;
    cin >> k;
    while (k != 0)
    {
        sequence();
        k = k - 1;
    }
    return 0;
}