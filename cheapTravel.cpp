#include <iostream>
using namespace std;
void cheap()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int min = 1000000;
    int cost = 0;   
    while (n > 0)
    {
        if (n - m <= 0 && cost + a > cost + b )
        {
            cost = cost + b;
            break;
        }
        if (b / m < a && n - m >= 0)
        {
            cost = cost + b;
            n = n - m;
        }

        else
        {
            cost = cost + a;
            n = n - 1;
        }
        // cout << cost << endl;
    }
    cout << cost << endl;
}

int main()
{
    cheap();
    return 0;
}