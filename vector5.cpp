#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the number of row and columns";
    cin>>r>>c;
    vector<vector<int>> vec(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>vec[i][j];
        }
    }
    cout<<endl<<"The array is ";
    for(auto row:vec){
        for(auto col:row){
            cout<<col;
        }
    }
    return 0;
}