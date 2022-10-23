#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n][2];
for(int i=0;i<n;i++){
    for(int j=0;j<2;j++){
    cin>>arr[i][j];

    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<2;j++){
    cout<<arr[i][j];
    }
    cout<<endl;
}
    return 0;
}