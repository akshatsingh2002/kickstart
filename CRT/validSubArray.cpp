#include<iostream>
using namespace std;
int main(){
    int arr[8] = { 1,-1,1,1,-1,1,1,-1};
    int arr2[8]={1,2,-1,2,-2,3,3,1};
    long long presum = 0;
    for(int i=0;i<8;i++){
        presum+=arr[i];

    }
    return 0;
}
