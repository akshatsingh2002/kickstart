#include <iostream>
using namespace std;
void calc()
{
    int n, k, ans = 0;
    cin >> n >> k;
    int totaltime = 240;
    int timeLeft = 240 - k;
    int timeRequired = 0;
    for (int i = 1; i <= n; i++)
    {
        timeRequired = 5 * i + timeRequired;
        if (timeRequired > timeLeft)
        {
            break;
        }
        else
            ans++;
    }
    cout << ans << endl;
}
int main()
{
    calc();
    return 0;
}