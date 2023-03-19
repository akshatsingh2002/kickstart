#include <iostream>
using namespace std;
void result()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c)
    {
        cout << "+" << endl;
    }
    else
    {
        cout << "-" << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        result();
        n = n - 1;
    }
    return 0;
}