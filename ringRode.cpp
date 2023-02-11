#include <iostream>
using namespace std;
void rode()
{
    long long  n, m;
    cin >> n >> m;
    long long val, prevval = 0;
    long long  steps = 0;
    for (long long  i = 0; i < m; i++)
    {
        cin >> val;
        if (i == 0)
        {
            steps = steps + val - 1;
        }
        else if (prevval <= val)
        {
            steps = steps + val - prevval;
        }
        else
        {
            steps = steps + (n - prevval) + val;
        }
        prevval = val;
    }
    cout << steps << endl;
}

int main()
{
    rode();
    return 0;
}