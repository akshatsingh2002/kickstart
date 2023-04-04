#include<iostream>
using namespace std;
int points(){
    int n;
    cin>>n;
    int start = 0;
    int end = n / 2;
    int mid = start + (end - start) / 2;
    while(start<=end){
        if(mid*mid>=n){
            end = mid - 1;
        }
        else 
        {
            start = mid + 1;
        }
        mid = start + (end - start ) / 2;
    }
    return mid-1;
}
int main(){
    int k;
    cin>>k;
    while(k--){
        int ans = points();
        cout<<ans<<endl;
    }
    return 0;
}