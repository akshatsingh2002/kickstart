#include <iostream>
using namespace std;
void eren()
{
    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + a;
        }
        else
            sum = sum + b;
    }
    cout << sum << endl;
}
int main()
{
    int k;
    cin >> k;
    while (k != 0)
    {
        eren();
        k = k - 1;
    }
    return 0;
}