// #include<iostream>
// #include<algorithm>
// using namespace std;
// void steps(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort(arr,arr+n);
//     int min = arr[0];
//     int steps = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=min){
//             steps ++;
//         }
//     }
//     cout<<steps<<endl;
// }
// int main(){
//     int k;
//     cin>>k;
//     while(k!=0){
//         steps();
//         k = k - 1;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
void bitwise(){
    int n;
    cin>>n;
    int con = 0;
    int arr1[n];
    int arr2[n];
    int count = 0;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        if(arr1[i==1]){
            count = 1;
        }
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
    if(arr1[0]!=arr2[0]|| arr1[n-1]!=arr2[n-1] || (arr1[i]==1 && arr2[i]==0)){
        con = 0 ;
        break;
        
    }
    else if (count == 1){
        cout<<"YES"<<endl;
    }

    }
    
    
}

int main() {
	int n;
	cin>>n;
	while(n!=0){
	     bitwise();
	     n = n - 1;
	}
	return 0;
}

