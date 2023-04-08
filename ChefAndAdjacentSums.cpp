#include <iostream>
#include<algorithm>
using namespace std;
void sums(){
    int n;
    cin>>n;
    int arr[n];
    int con = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int z = arr[n-1] + arr[n-2];
    for(int i=n-1;i>0;i--){
        for(int j=i-1;j>=0;j--){
            if(arr[i]+arr[j]<z){
                swap(arr[i-1],arr[j]);
                con = 1;
                break;
            }
            else{
                con = 0;
            }
        }
    }
    if(con == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
  
  
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    sums();
	}
	return 0;
}
