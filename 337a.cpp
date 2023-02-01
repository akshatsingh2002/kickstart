#include<iostream>
#include<algorithm>
using namespace std;
void puzzles(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    int sol[m-n+1];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<m-n+1;i++){
        int max=0,min=10000;
        for(int j=i;j<n+i;j++){
            if(arr[j]>max)
            max = arr[j];
            if(arr[j]<min)
            min = arr[j];
        }
        // cout<<"max"<<max<<"min"<<min<<endl;
        sol[i] = max - min;
    }
    sort(sol,sol+m-n+1);
    cout<<sol[0]<<endl;
}
int main(){
     puzzles();
    return 0;
}