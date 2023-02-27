#include <iostream>
#include <algorithm>
using namespace std;
int main()
{   int n;
    cin>>n;
    long long a[n][3];
    for(long long i=0;i<n;i++){
        for(long long  j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    long long q;
    cin>>q;
    for(long long i=0;i<q;i++){
        for(long long  j=0;j<1;j++){
            cin>>a[i][j];
        }
    }

    return 0;
}