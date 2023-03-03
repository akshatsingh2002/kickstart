#include <iostream>
#include <math.h>
using namespace std;
void pairs()
{
    int n, k;
    cin >> n >> k;
    char arr[n];
    int burl = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] != 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(int(arr[i]) - int(arr[j])) == 32)
                {
                    arr[i] = '\0';
                    arr[j] = '\0';
                    burl++;
                    break;
                }
                // cout << burl << endl;
            }
        }
    }
    for (int i = 0; i < n-1 && k>0; i++)
    {
        if (arr[i] != 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if(int(arr[i])-int(arr[j])==0 ){
                    arr[i] = '\0';
                    arr[j] = '\0';
                    burl++;
                    k = k - 1;
                    break;

                }
                // cout << burl << endl;
            }
        }
    }
    // cout<<"BUrl :"<<burl<<endl;

    cout << burl << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        pairs();
        n = n - 1;
    }
    return 0;
}