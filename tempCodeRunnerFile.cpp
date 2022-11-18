#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;
    long long int arr[m];        // input array
    long long int values[m - n]; // array to sotre the difference between the highes and lowest value
    int max_val, min_val;

    for (long long i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    for (long long i = 0; i < m - n + 1 ; i++)
    {
        max_val = 4;
        min_val = 1000;
        
        for (long long j = i; j < i + n  ; j++)
        {
            // cout<<i<<"i"<<j<<'J'<<endl;
            

            if (arr[j] >= max_val)
            {
                max_val = arr[j];
            }
            if (arr[j] <= min_val)
            {
                min_val = arr[j];
            }

            // cout<<max_val<<" "<<min_val<<endl;
        }
        // cout<<max_val-min_val<<"ans";
        values[i] = max_val - min_val;
    }
    int min_val2 = 1000;
    for (long long i = 0; i < m - n + 1; i++)
    {
        // cout<<values[i]<<endl;

        if (values[i] <= min_val2)
        {
            min_val2 = values[i];
            values[i];
        }
    }

    cout << min_val2 << endl;

    return 0;
}