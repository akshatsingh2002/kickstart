#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int total = 0;
    switch (1)
    {
    case 1:
        total = total + n / 100;
        n = n % 100;
    case 2:
        total = total + n / 50;
        n = n % 50;

    case 3:
        total = total + n / 20;
        n = n % 20;

    case 4:
        total = total + n / 1;
        n = n % 1;
        break;
    }
    cout << total;
    return 0;
}