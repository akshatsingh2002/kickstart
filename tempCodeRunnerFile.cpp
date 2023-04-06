#include <iostream>
#include<algorithm>
using namespace std;
void countof1()
{  
    long long n,s,x;
    cin>>n>>s;
    long long arr1[n],arr2[n];
    long long coun1=0,count2=0;
    for(int i=n-1;i>=0;i--){
        arr1[i]=s%10;
        s = s / 10;
    }
    arr2[0] = 0;
    for(int i=1;i<n;i++){
        arr2[i]=arr1[i-1]^arr2[i-1];
        if(arr2[i]==1){
            coun1++;
        }
    }
    arr2[0]=1;
    count2 ++;
    for(int i=1;i<n;i++){
        arr2[i]=arr1[i-1]^arr2[i-1];
        if(arr2[i]==1){
            count2++;
        }
    }
    cout<<max(coun1,count2)<<endl;


}
int main()
{
    int k;
    cin >> k;
    while (k != 0)
    {
        countof1();
        k = k - 1;
    }
    return 0;
}