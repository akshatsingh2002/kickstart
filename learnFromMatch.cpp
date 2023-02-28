#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int con = 0;
    int a = 4, b = n - 4;
    while (con != 1)
    {
        if ((a % 2 == 0 || a % 3 == 0) && (b % 2 == 0 || b % 3 == 0) && a + b == n)
        {

            con = 1;
        }
        else
        {
            a = a + 1;
            b = b - 1;
        }
    }
    cout << a << " " << b;
    return 0;
}