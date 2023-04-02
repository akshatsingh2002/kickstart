#include <iostream>
#include <vector>
using namespace std;
void candies()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        vector<int> binary;
        int i = 0;
        while (n > 0)
        {
            binary.push_back(n % 2);
            n = n / 2;
            i++;
        }
        cout<<binary.size()-1<<endl;
        for (int i = 0; i < binary.size() - 1; i++)
        {
            if (binary[i] == 1)
            {
                cout << 2 << " ";
            }
            else
            {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
int main()
{
    int k = 0;
    cin >> k;
    while (k!=0)
    {
        candies();
        k = k - 1;
    }
    return 0;
}