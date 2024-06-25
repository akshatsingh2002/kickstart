#include <iostream>
using namespace std;
void solve()
{
    int h, k;
    cin >> h >> k;
    int ans_a, ans_b;
    char temp;
    int max = 0;
    int flag1 = 0;
    int r;
    for (int i = 1; i <= h; i++)
    {
        int count = 0;
        for (int j = 1; j <= k; j++)
        {
            cin >> temp;
            if (temp == '#' && flag1 == 0)
            {
                ans_b = j;
            }
            if (temp == '#')
            {
                count++;
            }
        }
        // cout<<count<<endl;
        if (count > max)
        {
            ans_a = i;
            max = count;
        }
        count = 0;
    }
    cout << ans_a << " " << ans_b << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}