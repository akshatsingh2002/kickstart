#include<bits/stdc++.h>
using namespace std;
int main(){
    long wightofmelon;
    cin>>wightofmelon;
    if(wightofmelon<0){
        wightofmelon=wightofmelon*-1;
    }
     if(wightofmelon==2){
        cout<<"NO";
     }
   else if(wightofmelon%2==0){
        cout<<"YES";
    }
    
    
    else
    cout<<"NO";
    
    return 0;
}

