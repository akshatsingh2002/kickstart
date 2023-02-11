#include <iostream>
using namespace std;
void prime()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        int ans = 2;
        cin >> val;
        if (val <= 3)
        {
            cout << "NO" << endl;
        }
        else if (val == 4)
        {
            cout << "YES" << endl;
        }
        else if (val % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int j = 3; j < val / 2 + 1;)
            {
                if (val % j == 0)
                {
                    ans++;
                }
                if (ans >= 4)
                {
                    break;
                }
                j = j + 2;
            }  
            if(ans == 3)

            cout << "YES" << endl;
            else
            cout<<"NO"<<endl;
        }
    }
}
int main()
{
    prime();
    return 0;
}