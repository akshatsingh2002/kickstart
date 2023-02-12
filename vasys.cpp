#include <iostream>
using namespace std;
void sock()
{
    int a, b;
    cin >> a >> b;
    if (a <= b)
    {
        cout << a;
        b = b - a;
        cout << " " << b / 2;
    }
    else if (a > b)
    {
        cout << b;
        a = a - b;
        cout << " " << a / 2;
    }
}
int main()
{
    sock();
    return 0;
}