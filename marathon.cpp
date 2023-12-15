#include <iostream>
using namespace std;
void marathon()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int count = 0;
    if (a < b)
    {
        count++;
    }
    if (a < c)
    {
        count++;
    }
    if (a < d)
    {
        count++;
    }
    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        marathon();
    }
    return 0;
}