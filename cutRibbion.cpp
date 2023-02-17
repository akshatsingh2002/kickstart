#include <iostream>
#include <algorithm>
using namespace std;
void cut()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
 
    int arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
 
    sort(arr, arr + 3);
    int count = 0;
    int sum = 0;
    while(sum!=n){
        if(sum + arr[1]==n){
            sum = sum + arr[1];
            count++;
            break;
        }
        else if(sum + arr[2]==n){
            sum = sum + arr[2];
            count++;
            break;
        }
        else{
            sum = sum + arr[0];
            count++;
        }
    }
    cout << count << endl;
}
int main()
{
    cut();
    return 0;
}