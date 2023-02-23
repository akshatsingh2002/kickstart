#include <iostream>
#include <algorithm>
using namespace std;
void restore()
{
    int a, b, c;
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 4);
    c = arr[3] - arr[0];
    b = arr[3] - arr[1];
    a = arr[3] - arr[2];
    cout << a << " " << b << " " << c << endl;
}
int main()
{
    restore();
    return 0;
}