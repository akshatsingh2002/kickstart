#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int N,S,R,SA;
        cin>>N>>S>>R>>SA;
        if(N>=S){
            S=S+R;
        }
        else
        N=N+R;
        if(N>=S){
            S=S+SA;
        }
        else
        N=N+SA;

        if(N>=S){
            cout<<"N"<<endl;
        }
        else
        cout<<"S"<<endl;
    }
    return 0;
}