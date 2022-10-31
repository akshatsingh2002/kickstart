#include <iostream>
#include <string>
using namespace std;
int main()
{
    int k, n;
    cin >> k >> n;
    string arr[k];
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
        // cout<<arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        string inpt;
        int con = 0;
        cin >> inpt;
        for (int j = 0; j < k; j++)
        {
            for (int f = 0; f < inpt.length(); f++)
            {
                // cout<<"Length"<<arr[j].length();
                string check = inpt.substr(f, arr[j].length());
                // cout<<"Check :"<<check<<endl;
                if (arr[j] == check)
                {
                    con = 1;
                    break;
                }
            }
        }
        if (con == 0)
        {
            if (inpt.length() >= 47)
                cout << "Good" << endl;
            else
                cout << "Bad" << endl;
        }
        else
            cout << "Good" << endl;
    }
    return 0;
}