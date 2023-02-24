#include <iostream>
using namespace std;
void steps()
{
    long long a, b;
    cin >> a >> b;
    if (a > b)
    {
        int temp = a;

        a = b;
        b = temp;
    }
    int count = 0;
    if (b - a <= 10)
    {
        count = 0;
    }
    else if (b - a > 10)
    {
        b = b - a;
        count = b / 10;
        b = b % 10;
        if (b <=10 && b !=0)
        {
            count++;
        }
    }
    cout << count << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        steps();
        n = n - 1;
    }
    return 0;
}