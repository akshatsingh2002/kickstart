#include <iostream>
using namespace std;
int main()
{
    int n;
    int min = 10000, max = 0;
    cin >> n;
    int arr[n];
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i != 0)
        {   if(i == 1 && arr[1]>arr[0]){
            counter++;
            max = arr[1];
            min = arr[0];
            }
            else if(i == 1 && arr[1]<arr[0]){
            counter++;
            min = arr[1];
            max = arr[0];
            }
            else if(arr[i]==arr[i-1]){
                continue;
            }
            else if (arr[i] > max)
            {
                max = arr[i];
                counter++;
                // cout<<"maxStatement"<<endl;
            }
            else if (arr[i] < min)
            {
                min = arr[i];
                counter++;
                // cout<<"minStatement"<<endl;
            }
        }
    }
    cout<<counter;
    return 0;
}