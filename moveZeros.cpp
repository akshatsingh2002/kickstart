#include<iostream>
#include<vector>
using namespace std;
 void moveZeroes(vector<int>& nums) {
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                arr.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i<arr.size()){
                nums[i]=arr[i];
            }
            else{
                nums[i] = 0;
            }
        }
 }
 int main(){
    vector<int> nums = {1,0,3,0,4,0,99,0};
    moveZeroes(nums);
    return 0;
 }