#include <iostream>
using namespace std;
void pattern()
{
    long long n;
    cin >> n;
    long long k;
    cin>>k;
    long long arr1[n][n];
    long long arr2[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr2[i][j] = arr1[n - i - 1][n - j - 1];
        }
    }
    int i=0,j=0;
    for(i=0;i<n;i++){
        if(k<0){
            break;
        }
        for(j=0;j<n;j++){
            if(arr1[i][j]!=arr2[i][j]){
                k -- ;
            }
            
        }
        
    }
    
    if(i==n && j==n && k == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        pattern();
    }
    return 0;
}