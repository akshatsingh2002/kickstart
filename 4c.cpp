// #include <iostream>
// #include <string>
// using namespace std;
 
// int main()
// {
//     long long n;
//     cin >> n;
//     string names[n];
//     for (long long i = 0; i < n; i++)
//     {
//         int count = 0;
//         cin >> names[i];
//           for (long long j = 0; j < i; j++)
//         {
//             if (names[i] == names[j] && i != j)
//             {
//                 count++;
//             }
//         }
//         if (count > 0)
//         {
//             cout << names[i] << count<<endl;
//         }
//         else
//             cout << "OK"<<endl;
//     }
 
//     // for (long long i = 0; i < n; i++)
//     // {
//     //     int count = 0;
      
//     // }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> name;
    string s;
    while (n--)
    {
        cin >> s;
        if (name.count(s) == 0)
        {
            cout << "OK" << endl;
            name[s] = 1;
        }
        else
        {
            cout << s << name[s] << endl;
            name[s] += 1;
        }
    }
    return 0;
}