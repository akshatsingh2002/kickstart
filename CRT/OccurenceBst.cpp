#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    long long n;
    map<int,vector<int>> mymap;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp = 0;
        cin>>temp;
        arr.push_back(temp);
        mymap[temp].push_back(i);
    }

    int x=0,y=0;
    cout<<"Enter the index :";
    cin>>x;
    cout<<"Enter the target";
    int low = 0 ,high=mymap[y].size()-1;
    int mid = (low+high)/2;
    int ans=0;
    while(low<high){
        if(mymap[y][mid]<x){
            low = mid + 1;
        }
        else if(mymap[y][mid]>x){
            high = mid - 1;
            ans = mymap[y][mid];
        }

        mid =(low+high)/2;
    }
    cout<<ans<<endl;

    return 0;
}