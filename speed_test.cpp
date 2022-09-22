#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        float a,x,b,y;
        cin>>a>>x>>b>>y;
        if((a/x)<(b/y)){
            cout<<"Bob"<<endl;
        }
        else if((a/x)==(b/y))
        cout<<"Equal"<<endl;
        else
        cout<<"Alice"<<endl;
    }
    return 0;
}