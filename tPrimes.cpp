#include<iostream>
using namespace std;
void prime(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        int ans=0;
        cin>>val;
        for(int i=1;i<val/2+1;i++){
            if(val%i==0){
                ans++;
            }
            if(ans>=4){
                break;
            }
 
        }
        ans = ans + 1;
        if(ans == 3){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    
}
int main(){
    prime();
    return 0;
}