#include <iostream>
#include <vector>
using namespace std;
vector<int> plusOne(vector<int> &d)
{
    int l = d.size() - 1;
    d[l]++;
    for (int i = d.size() - 1; i > 0; i--)
    {
        if (d[i] > 9)
        {
            d[i - 1]++;
            d[i] = d[i] % 10;
        }
    }
    if (d[0] > 9)
    {
        d[0] = d[0] % 10;
        d.insert(d.begin(), 1);
    }
    return d;
}

int main(){
    vector<int> d ={1,2,3,4,5,6,7};
    plusOne(d);
    for(auto itr:d){
        cout<<itr;
    }
    return 0;
}