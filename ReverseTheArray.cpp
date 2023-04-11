// reverse the array after the given index position//
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void reverse(vector<int> &arr, int m){
    int n = arr.size()-1;
	int i=m+1;
	int j = n;
	while(i<j){
		swap(arr[i],arr[j]);
		i++;
		j--;
	}
    for(int i=0;i<=n;i++){
        cout<<arr[i];
    }
}
int main(){
    vector<int> arr;
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    cout<<endl;
    cout<<"Enter the position to start the reverse of the array";
    int m;
    cin>>m;
    cout<<"Enter the elements in the array"<<endl;
    for(int i=0;i<n;i++){
        long long val;
        cin>>val;
        arr.push_back(val);
    }
    reverse(arr,m);
    return 0;
}