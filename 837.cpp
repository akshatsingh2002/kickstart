#include <iostream>
#include <algorithm>

using namespace std;

void solution()
{
    int n;
    cin >> n;
    int arr[n];
    int max = 0, min = 10000;
    int count_max = 0, count_min = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    count_max = count(arr, arr + n, max);
    count_min = count(arr, arr + n, min);
    cout << count_max*count_min*2<<endl;
}
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        solution();
        n--;
    }
    return 0;
}
