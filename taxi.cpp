#include<iostream>
#include<algorithm>
#include<math.h>
using namespace  std;
void taxi(int n){
    int arr[n];
    int count = 0;
    int count1=0,count3=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            count1++;
        }
        if(arr[i]==3){
            count3++;
            count++; //counts number of 3 because a seperate taxi will be needed
        }
        if(arr[i]==4){
            count++; //counts number of 4 because a seperate taxi will be needed
        }
    }
    if(count1<=count3){
        count1 = 0;
    }
    else
    count1 = count1 - count3; //eliminating 1 3 pair which can be adjusted in one taxi
    int tempsum = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==2)
        tempsum = tempsum + arr[i];
    }
    tempsum = tempsum + count1;
    if(tempsum%4==0)
    count = count +(tempsum/4);
    else
    count = count +(tempsum/4)+1;

    cout<<count<<endl;

}
int main(){
    int n;
    cin>>n;
    taxi(n);
    return 0;
}