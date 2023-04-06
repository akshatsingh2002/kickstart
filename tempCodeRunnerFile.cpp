#include <iostream>
using namespace std;
void countof1()
{
    int k;
    cin >> k;
    long long n;
    cin >> n;
    int count1 = 0, count2 = 1;
    int arr[k];
    int arr2[k];
    int arr3[k];
    for (int i = k - 1; i >= 0; i--)
    {
        arr[i] = n % 10;
        n = n / 10;
    }
    arr2[0] = 0;
    for (int i = 1; i < k; i++)
    {
        arr2[i] = arr2[i - 1] ^ arr[i - 1];
        if (arr[i] == 1)
        {
            count1++;
        }
    }
    arr3[0] = 1;

    for (int i = 1; i < k; i++)
    {
        arr3[i] = arr3[i - 1] ^ arr[i - 1];
        if (arr3[i] == 1)
        {
            count2++;
        }
    }
    if (count1 > count2)
    {
        cout << count1 << endl;
    }
    else
        cout << count2 << endl;
}
int main()
{
    int k;
    cin >> k;
    while (k != 0)
    {
        countof1();
        k = k - 1;
    }
    return 0;
}