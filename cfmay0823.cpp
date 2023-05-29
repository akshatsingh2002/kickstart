#include <iostream>
#include <algorithm>
using namespace std;
void minmax(){

}
void twin()
{
    long long n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        twin();
    }
    return 0;
}