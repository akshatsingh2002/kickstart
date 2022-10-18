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

    for (int i = 0; i < l; i++)
    {
        if (n[i] == '7' || n[i] == '4')
        {
            con = 1;
            if (n[i] == '7')
                con7 = 1;
            else if (n[i] == '4')
                con4 = 1;
        }
        else
        {
            con = 0;
            // cout<<"Loop Testing";
            
            for (int j = 0; j < l; j++)
            {
                if (n[j] == '7' || n[j] == '4')
                {
                    count++;
                    cout<<"count:"<<count<<endl;
                    if (n[j] == '7')
                        con7 = 1;
                    else if (n[j] == '4')
                        con4 = 1;
                }
            }
            count2 = to_string(count);
            cout<<count2<<endl;
            for (int i = 0; i < l; i++)
            {   
                if (count2[i] == '7' || count2[i] == '4')
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
    cout<<con<<con4<<con7;

    if (con == 1 && con4 == 1 && con7 == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}