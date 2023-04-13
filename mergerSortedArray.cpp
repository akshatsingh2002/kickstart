#include <iostream>
#include <vector>
using namespace std;
void merger(int arr1[], int n, int arr2[], int m)
{
    vector<int> arr;
    int i = 0, j = 0, k = 0;
    while(j<n && k<m)
    {
        if (arr1[j] < arr2[k])
        {
            arr.push_back(arr1[j]);
            j++;
        }
        else
        {
            arr.push_back(arr2[k]);
            k++;
        }
        i++;
    }
    cout<<j<<k;
    while(j<n){
        arr[i] = arr1[j];
        i++;
        j++;
    }
    while(k<m){
        arr[i] = arr1[k];
        i++;
        k++;
    }
    for (auto itr=arr.begin();itr<arr.end();itr++)

    {
        cout <<*itr;
    }
}

int main(){
    int arr1[4] = {2,4,6,8};
    int arr2[4] = {1,3,5,7};
    merger(arr1,4,arr2,4);
    return 0;
}