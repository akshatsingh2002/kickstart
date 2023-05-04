#include <iostream>
#include<algorithm>
using namespace std;
void max(){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long max1 = arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=max1){
            cout<<max1+arr[i];
            break;
        }
    }
}
int main() {
	
	long long t;
	cin>>t;
	while(t--){
	    max();
	}
	return 0;
}
