#include <iostream>

using namespace std;
void solution()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0, count = 0, min = 10000;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
        if (arr[i] < min && arr[i]!=1)
        {
            min = arr[i];
        }
    }
    if (sum % 2 == 0)
    {
        cout << "0" << endl;
    }
    else
    {   
        min = min +1;
       while(min!=1){
        min = min /2 ;
        count = count + 1;
       }
       cout<<count<<endl;
    }
}
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        solution();
        n--;
    }
    return 0;
}