#include <iostream>
using namespace std;
void balanced()
{
    int n;
    cin>>n;
    int k = n / 2;
    int arr1[k];
    int arr2[k];
    int sum1 = 0, sum2 = 0;
    int val = 1;
    for (int i = 0; i < k; i++)
    {
        arr1[i] = val * 2;
        sum1 = sum1 + arr1[i];
        val = val + 1;
    }
    for (int i = 0; i < k-1; i++)
    {
        arr2[i] = arr1[i] - 1;
        sum2 = sum2 + arr2[i];
    }
    int rem = sum1 - sum2;
    arr2[k-1] = rem;

    if (rem % 2 == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < k; i++)
        {
            cout << arr1[i] << " ";
        }
        for (int i = 0; i < k; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        balanced();
        n = n - 1;
    }
    return 0;
}