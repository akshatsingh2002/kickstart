#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
void olymp()
{
        long long n;
        cin >> n;
        map<int, vector<int>> mymap;
        for (int i = 0; i < n; i++)
        {
                int val;
                cin >> val;
                if (mymap.find(val) != mymap.end())
                {
                        mymap[val].push_back(i);
                }
                else
                {
                        mymap[val].push_back(i);
                }
        }
        int s1 = mymap[1].size();
        int s2 = mymap[2].size();
        int s3 = mymap[3].size();
        int m1 = min(s1, s2);
        int m2 = min(m1, s3);
        cout << m2 << endl;
        for (int j = 0; j < m2; j++)
        {
                cout << mymap[1][j] + 1 << " " << mymap[2][j] + 1 << " " << mymap[3][j] + 1 << endl;
        }
}
int main()
{
        olymp();
        return 0;
}