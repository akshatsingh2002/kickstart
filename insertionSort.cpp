#include <iostream>
#include <algorithm>

using namespace std;
void insertionSort(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0 && (arr[i] > arr[i + 1]))
        {
            swap(arr[i], arr[i + 1]);
        }
        else if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);

            for (int j = i; j > 0; j--)
            {
                if (arr[j] < arr[j - 1])
                {
                    swap(arr[j], arr[j - 1]);
                }
            }
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(n, arr);
    return 0;
}