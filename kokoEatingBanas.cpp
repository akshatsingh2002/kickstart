#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
class Solution
{
public:
    int findans(vector<int> &piles2, int mid)
    {
        float sumans = 0;
        for (int i = 0; i < piles2.size(); i++)
        {
            if (piles2[i] / mid == 0)
            {
                sumans += 1;
            }
            else
            {
                sumans += ceil(float(piles2[i]) / mid);
            }
        }
        cout<<"sumans"<<sumans<<endl;

        return sumans;
    }
    int minEatingSpeed(vector<int> &piles, int h)
    {
        sort(piles.begin(), piles.end());
        long long ans = 1e18;
        long long  low = 1;
        long long  high = piles[piles.size() - 1];
        long long mid = 0;
        long long temp = 0;
        while (low <= high)
        {
            mid = (low + high) / 2;
            cout<<"mid"<<mid<<endl;
            temp = findans(piles, mid);
            cout<<"temp"<<temp<<endl;

            if (temp <= h)
            {
                if (h == temp)
                {
                    ans = min(ans, mid);
                }
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }

        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int> arr = {312884470};
    int ans = obj.minEatingSpeed(arr, 312884469);
    cout << ans << endl;
    return 0;
}