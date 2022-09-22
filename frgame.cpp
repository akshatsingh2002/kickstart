#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int N,S,R,SA;
        cin>>N>>S>>R>>SA;
        N=N+R;
        S=S+SA;
        if(N>=S){
            cout<<"N"<<endl;
    }
    else
    cout<<"S"<<endl;
    }
    return 0;
}