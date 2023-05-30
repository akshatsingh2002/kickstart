#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
    map<int,int> mymap;
    vector<string> tmp(score.size());
    for(int i=0;i<score.size();i++){
        mymap[score[i]]=i;
    }
    sort(score.begin(),score.end());
    int l = score.size();
    int rank=1;
    for(int i=l-1;i>=0;i--){
        if(i==l-1){
            tmp[mymap[score[i]]] = "Gold Medal";
            rank++;
        }
        else if(i==l-2){
            tmp[mymap[score[i]]] = "Silver Medal";
            rank++;
        }
        else if(i==l-3){
            tmp[mymap[score[i]]] = "Bronze Medal";
            rank++;
        }
        else{
            tmp[mymap[score[i]]] = to_string(rank);
            rank++;
        }
    } 
    return tmp;       
    }
};



int main(){
    vector<int> arr = {5,4,3,2,1};
    Solution obj;
    vector<string> ans  = obj.findRelativeRanks(arr);
    for(auto itr:ans){
        cout<<itr<<endl;
    }

    return 0;

}