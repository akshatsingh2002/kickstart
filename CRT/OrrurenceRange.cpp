#include<iostream>
#include<vector>
#include<map>
using namespace std;
int firstOccurence(int index, int target,vector<int> &arr){
    int low = 0 ,high=arr.size()-1;
    int mid = (low+high)/2;
    int ans=0;
    while(low<=high){
        if(arr[mid]<index){
            low = mid + 1;
        
        }
        else if(arr[mid]>index){
            high = mid - 1;
            ans = arr[mid];
        }

        mid =(low+high)/2;
    }
    return ans;

}

int lastOccurence(int index, int target,vector<int> &arr){
    int low = 0 ,high=arr.size()-1;
    int mid = (low+high)/2;
    int ans=0;
    while(low<=high){
        if(arr[mid]<index){
            low = mid + 1;
            ans = arr[mid];
        
        }
        else if(arr[mid]>index){
            high = mid - 1;
        }

        mid =(low+high)/2;
    }
    return ans;

}
int main(){
    vector<int> arr;
    cout<<"Enter the size of arr";
    int n;
    cin>>n;
    map<int,vector<int>> mymap;
    for(int i=0;i<n;i++){
        int temp = 0;
        cin>>temp;
        arr.push_back(temp);
        mymap[temp].push_back(i);
    }
    int ans1 = firstOccurence(mymap[]);
    return 0;
}




//find frequeny using c++ library use of lower bound and upper bound function