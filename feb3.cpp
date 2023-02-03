#include <iostream>
#include <string>
#include<map>
using namespace std;
// void check()
// {
//     string s, c = "codeforces";
//     cin >> s;
//     int con = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         if (s.at(0) == c.at(i))
//         {
//             con = 1;
//             break;
//         }
//     }
//     if (con == 1)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
// }
// void directions()
// {
//     int n;
//     cin >> n;
//     char arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x = 0, y = 0;
//     int con = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 'U')
//             y = y + 1;
//         if (arr[i] == 'D')
//             y = y - 1;
//         if (arr[i] == 'L')
//             x = x - 1;
//         if (arr[i] == 'R')
//             x = x + 1;
//         if(x==1&&y==1){
//             con = 1;
//             break;
//         }
//     }
//     if(con == 1){
//         cout<<"YES"<<endl;
//     }
//     else
//     cout<<"NO"<<endl;
// }
// void append()
// {
//     int n;
//     cin >> n;
//     string str;
//     cin >> str;
//     int counter = n;
//     for (int i = 0, j = n-1; i < j; i++, j--)
//     {
        
//         if (str.at(i) == '0' && str.at(j) == '1')
//         {
//             counter = counter - 2;
//         }
//         else if (str.at(i) == '1' && str.at(j) == '0')
//         {
//             counter = counter - 2;
//         }
//         else
//         break;
//     }
//     cout<<counter<<endl;
// }

int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        // check();
        // directions();
       
        n = n - 1;
    }
    return 0;
}