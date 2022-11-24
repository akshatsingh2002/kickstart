#include <iostream>
#include <math.h>
using namespace std;

int bitwiseComplement(int n)
{
    int mask = 0;
    int j = ~n;
    if (n != 0)
    {
        while (n != 0)
        {
            n = n >> 1;
            mask = (mask << 1) | 1;
            // cout<<mask<<endl;
        }
        //    cout<<mask;
        return (j & mask);
    }
    else
        return 1;
}

int main()
{
    int n;
    cin>>n;
    cout<<bitwiseComplement(n);

    return 0;
}