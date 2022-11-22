#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int reverse(long long  x)
{
    long long  y = 0;
    long long rem = 0;
    while (x != 0)
    {
        rem = x % 10;
        y = y * 10 + rem;
        
        x = x / 10;
        
    }
    cout<<y<<endl;
    x = y;
    if (-2 ^ 31 <= x <= 2 ^ 31 - 1)
    {
        return x;
    }
    else
        return 0;
}
int main()
{
    long long x;
    cin >> x;
    cout<<reverse(x);
    return 0;
}