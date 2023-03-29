#include <iostream>
#include <string>
using namespace std;
void replace()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int even = 1;
    int con = 0 ;
    for (int i = 0; i < n; i++)
    {
        char val = s[i];
        for (int j = i; j < n; j++)
        {
            if (s[j] == val && s[j] != '1' && s[j] != '0')
            {
                if (even % 2 == 0)
                {
                    s[j] = '1';
                }
                else
                    s[j] = '0';
            }
        }
        even++;
  
    }
    cout<<s<<endl;
}
int main()
{
    int k;
    cin >> k;
    while (k != 0)
    {
        replace();
        k = k - 1;
    }
    return 0;
}