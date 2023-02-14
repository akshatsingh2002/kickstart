#include <iostream>
using namespace std;
void buy()
{
    int k, r;
    cin >> k >> r;
    int i = 1;
    for (;;)
    {
        if ((k * i) % 10 == r)
        {
            break;
        }
        else if ((k * i) % 10 == 0)
        {
            break;
        }

        i++;
    }
    cout << i << endl;
}
int main()
{
    buy();
    return 0;
}