#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     int arr[5] = {2,7,9,11,12};
//     int target = 11 ;
//     for(int i=0;i<5;i++){
//         for(int j=i;j<5;j++){
//             if(arr[i]+arr[j]==target){
//                 cout<<i<<","<<j;
//             }
//         }
//     }
//     return 0;
// }
int main(){
    vector<int> nums={2,7,11,15};
    int n = nums.size();
    int i,j;
    int target = 9;
    for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if((nums.at(i)+nums.at(j))==target){
                    break; 
                }
                cout<<nums.at(i)<<" "<<nums.at(j)<<endl;
            }
        }
    cout<<i<<j;
    cout<<n;
}