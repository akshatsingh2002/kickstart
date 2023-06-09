#include <iostream>
#include<algorithm>
using namespace std;
void beautiful()
{
    long long n;
    cin >> n;
    if (n == 1)
    {
        cout << "YES" << endl;
    }
    else
    {   long long  minval = 10e10   ;
        long long arr[n];
        int odd_count = 0, even_count = 0;
        for (long long i = 0; i < n; i++)
        {   
            cin >> arr[i];
            minval = min(minval,arr[i]);
            if (arr[i]% 2 == 0)
            {
                even_count++;
            }
            else
            {   
                odd_count++;
            }
            // cout<<minval<<endl;
        }
        if(odd_count==n){
            cout<<"YES"<<endl;
        }
        else if(even_count==n){
            cout<<"YES"<<endl;
        }
        else if(minval%2!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        beautiful();
    }
    return 0;
}