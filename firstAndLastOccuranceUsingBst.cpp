#include <iostream>
#include <algorithm>
using namespace std;
void bst(int arr[], int size, int val)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int con = 0;
    while (start <= end)
    {
        if (arr[start] == val && arr[end] == val)
        {
            con = 1;
            break;
        }
        else if (val < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    if (con == 1)
    {
        cout << "start" << start << " "
             << "End" << end;
    }
    else
        cout << "element not ound " << endl;
}
int main()
{
    int arr[10] = {1, 2, 3, 3, 3, 4, 5, 6, 7, 8};
    bst(arr, 10, 3);
    return 0;
}
