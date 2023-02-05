#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int evenCount = 0, oddCount = 0;
    int resultingIndex = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i]%2==0){
            evenCount++;
        }
        else
        oddCount ++;
    }
    if(oddCount<evenCount){
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
            resultingIndex = i+1 ;
            break;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
            resultingIndex = i+1 ;
            break;
            }
        }

    }
cout<<resultingIndex<<endl;
    return 0;
}