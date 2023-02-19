#include <iostream>
using namespace std;
void walk()
{
    int time;
    cin >> time;
    int arr[time];
    int count = 0;
    for (int i = 0; i < time; i++)
    {
        cin>>arr[i];
        if (i > 0)
        {
            if (arr[i] - arr[i - 1]  >= 120)
            {
                count = count + ((arr[i]-arr[i-1])/120);
            }
        }
    }
    if(arr[0]>=120){
        count = count + (arr[0]/120);
    }
    if(1400-arr[time-1]>=120){
        count = count + ((1440-arr[time-1])/120);
    }
    if (count >= 2)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        walk();
        n = n - 1;
    }
    return 0;
}