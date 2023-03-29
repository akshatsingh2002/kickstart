#include <iostream>
using namespace std;
void boys()
{
    int g, b;
    cin >> g >> b;
    if (g >= b)
    {
        cout << 0 << endl;
    }
    else
        cout << b - g << endl;
}

int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        boys();
        n = n - 1;
    }
    // your code goes here
    return 0;
}
