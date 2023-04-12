#include <iostream>
using namespace std;
void stadium()
{
    long long n;
    cin >> n;
    long long count = 0;
    float val = 0;
    float sum = 0;
    for (long long i = 1; i <= n; i++)
    {
        cin >> val;
        sum = sum + val;
        if ((sum / i) * 100 == 100)
        {
            count++;
        }
    }
    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stadium();
    }
    return 0;
}