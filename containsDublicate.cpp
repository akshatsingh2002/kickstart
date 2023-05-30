#include<iostream>
#include<map>
#include<set>
#include<vector>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> myset;
        for(auto itr:nums){
            myset.insert(itr);
        }
        if(myset.size()==nums.size()){
            return false;
        }
        else{
            return true;
        }

    }
    // map<int,int> mymap;
    //     for(auto itr:nums){
    //         mymap[itr]++;
    //     }
    //     for(auto itr:mymap){
    //         if(itr.second>1){
    //             return true;
    //         }
    //     }
    //     return false;
};


int main(){
    Solution obj;
    vector<int> arr = {1,1,1,3,3,4,3,2,4,2};
     bool  ans = obj.containsDuplicate(arr);
     cout<<ans<<endl;
    return 0;
}