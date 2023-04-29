#include <iostream>
using namespace std;
void sequence(int arr[],int n)
{
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    int count = 0, max = 0;
    for (int i = a; i <= b && i + 3 < n;)
    {
        if (arr[i] < arr[i + 1] && arr[i + 1] < arr[i + 2])
        {
            count = count + 3;
            if (max < count)
            {
                max = count;
            }
        }
        else
        {
            count = 0;
        }
        i+=3;
    }
    cout<<max<<endl;
}
int main(){
    int t;
    cin>>t;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while(t--){
        sequence(arr,n);
    }
    return 0;
}
