#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ar2;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        int count=1;
        if(arr[i]==arr[i-1]){
            count++;
        }
        else{
             ar2.push_back(count);
             count=0;
          
        }

    }
    for(auto y:ar2){
cout<<y;
}
    return 0;
}