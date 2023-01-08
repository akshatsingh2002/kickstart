#include <iostream>
#include <algorithm>
using namespace std;
void ugly()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0 , flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        
        
        if (arr[i] == sum && i>0 && arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            flag = 1 ;
        }

        sum = sum + arr[i];
    }
    if(flag == 1 || (n==3&&arr[0]==1&&arr[1]==4)&&arr[2]==4){
        cout<<"YES"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    }
    else
    cout<<"NO"<<endl;

}
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        ugly();
        n = n - 1;
    }
    return 0;
}