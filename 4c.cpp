#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    long long n;
    cin >> n;
    string names[n];
    for (long long i = 0; i < n; i++)
    {
        int count = 0;
        cin >> names[i];
          for (long long j = 0; j < i; j++)
        {
            if (names[i] == names[j] && i != j)
            {
                count++;
            }
        }
        if (count > 0)
        {
            cout << names[i] << count<<endl;
        }
        else
            cout << "OK"<<endl;
    }
 
    // for (long long i = 0; i < n; i++)
    // {
    //     int count = 0;
      
    // }
    return 0;
}