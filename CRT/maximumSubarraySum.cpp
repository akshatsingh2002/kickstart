#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int presum=0,minsum=0,ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            ans = max(ans,presum-minsum);
            minsum = min(minsum,presum);
        }
        return ans;
    }

int main(){
    vector<int> arr= {-2,1,-3,4,-1,2,1,-5,4};
    int val = maxSubArray(arr);
    cout<<val<<endl;
    return 0;
}
