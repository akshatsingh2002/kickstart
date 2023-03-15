#include <iostream>
#include <algorithm>
using namespace std;
void max_card()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = n - 1;
    int s=0,d=0;
    while(l<=r)
    {

        
            if (arr[l] > arr[r])
            {
                s = s + arr[l];
                arr[l] = 0 ;
                l = l + 1;

            }
            else
            {
                s = s + arr[r];
                arr[r] = 0;
                r = r - 1;
            }
        

        
            if (arr[l] > arr[r])
            {
                d = d + arr[l];
                arr[l] = 0 ;
                l = l + 1;
            }
            else
            {
                d = d + arr[r];
                arr[r] = 0 ;
                r = r - 1;
            }
    }
    cout << s << " " << d << endl;
}
int main()
{
    max_card();
    return 0;
}