#include <iostream>
using namespace std;
void towers()
{
    char arr1[20], arr2[20];
    int n, m;
    cin >> n >> m;
    int count1= 0;
    int count2 = 0;
    int finiteCounter = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        if(i>=1  && arr1[i]==arr1[i-1]){
            count1 ++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
        if(i>=1  && arr2[i]==arr2[i-1]){
            count2 ++;
        }
    }

    if(count1 ==0 && count2 == 0 ){
        cout<<"YES"<<endl;
    }
    else if(count1 == 1 && count2 == 0 && arr1[n-1] != arr2[m-1]){
        cout<<"YES"<<endl;
    }
    else if(count1 == 0 && count2 == 1 && arr1[n-1] != arr2[m-1]){
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO";
}
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        towers();
        n = n - 1;
    }
    return 0;
}