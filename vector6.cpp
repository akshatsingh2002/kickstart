#include<bits/stdc++.h>
using namespace std;
    int main(){
        int n,s;
        vector<int> arr;
        cout<<"Enter Total No. and Sum of No. - ";
        cin>>n>>s;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            arr.push_back(x);
        }
   vector<vector<int>> ans;
    for(int i=0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i] + arr[j] == s){
                vector<int>temp;
                temp.push_back(min(arr[i],arr[j]));
 
 temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
                
            }
        }
    }
    sort(ans.begin(),ans.end());
    
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}