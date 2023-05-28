#include <iostream>
#include <vector>
using namespace std;
int findKthPositive(vector<int> &arr, int k)
{
    int arr2[k] ={0};
    int s = arr.size();
    int ind = 0;
    int count = 1;
    int i = 0;
    while (ind < k && i < arr.size())
    {
        if (arr[i] != count)
        {
            arr2[ind] = count;
            ind++;
            i++;
            count++;
        }
        else
        {
            count++;
            i++;
        }
    }
    // cout << ind;
    while (ind < k)
    {
        arr2[ind++] = count++;
    }
    for(int i=0;i<k;i++){
        cout<<arr2[k]<<" ";
    }
    cout<<endl;
    return arr2[k - 1];
}

int main()
{
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 0;
    cin >> k;
    int val = findKthPositive(arr, k);
    cout << val << endl;
    return 0;
}
