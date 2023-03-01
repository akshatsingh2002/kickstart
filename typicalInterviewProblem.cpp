#include <iostream>
#include <string>
using namespace std;
void possible()
{
    int n;
    cin >> n;
    int con = 0;
    string s;
    string str1;
    cin>>str1;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 10 == 1)
            s.append("F");
        else if (i % 10 == 2)
            s.append("B");
        else if (i % 3 == 0 && i % 5 == 0)
                s.append("FB");
        else if (i % 10 == 3 && i % 5 != 0)
                s.append("F");
        else if (i % 10 == 4)
            s.append("F");
        else if (i % 10 == 5 && i % 3 != 0)
            s.append("B");
        else if (i % 10 == 6)
            s.append("F");
        else if (i % 10 == 7)
            s.append("F");
        else if (i % 10 == 8)
            s.append("B");
        else if (i % 10 == 9)
            s.append("F");
        else if (i % 10 == 0)
            s.append("B");
    }
    s = s.append(s);
    // cout<<s<<endl;
    for (int i = 0; i < s.length() - n; i++)
    {
        for (int k = 0; k < n && k < 10; k++)
        {
            if (s[k + i] == str1[k])
            {
                con++;
                if (con == n)
                {
                    break;
                }
            }
 
            else
            {
                con = 0;
                break;
            }
        }
        if (con == n)
        {
            break;
        }
    }
    if (con == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        possible();
        n = n - 1;
    }
    return 0;
}