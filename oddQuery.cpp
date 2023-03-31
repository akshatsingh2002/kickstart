#include <iostream>
using namespace std;
void odd()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] = arr[i] % 10;
        sum = sum + arr[i];
        sum = sum % 10; 
    }
    int l, r, k;
    for (int i = 0; i < q; i++)
    {
        long long localSum = 0;
        cin >> l >> r >> k;
        l--;
        r--;
        int j=l;
        for (;j < r;)
        {
            localSum = localSum + arr[j] + arr[j + 1];
            localSum = localSum % 10;
            j = j + 2;
        }
        if(j==r){
            localSum = localSum + arr[r];
            localSum = localSum % 10;
        }
        localSum = sum - localSum;
        localSum = localSum + (r - l + 1) * k;
        if (localSum % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
int main()
{
    int k;
    cin >> k;
    while (k != 0)
    {
        odd();
        k = k - 1;
    }
    return 0;
}