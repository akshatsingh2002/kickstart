#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{

    string n, count2;
    int con = 0, count = 0, con7 = 0, con4 = 0;
    cin >> n;
    int l = n.length();
    for (int j = 0; j < l; j++)
    {
        if (n[j] == '7')
            con7 = 1;
        if (n[j] == '4')
            con4 = 1;
    }

    for (int i = 0; i < l; i++)
    {
        if (n[i] == '7' || n[i] == '4')
        {
            con = 1;
        }
        else
        {
            for (int j = 0; j < l; j++)
            {
                if (n[j] == '7' or n[j] == '4')
                {
                    count = count + 1;
                }
            }
            // cout<<"Loop Testing";
            count2 = to_string(count);
            // cout << count2 << endl;
            int l2 = count2.length();
            for (int k = 0; k < l2; k++)
            {
                if (count2[k] == '7' or count2[k] == '4')
                {
                    con = 1;
                }
                else
                {
                    con = 0;
                    break;
                }
            }
            break;
        }
    }
    cout << con << con4 << con7;

    if (con == 1 && con4 == 1 && con7 == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}