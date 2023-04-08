#include<iostream>
#include<algorithm>
using namespace std;
void maze(){
    long long n,m;
    cin>>n>>m;
    long long x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    long long count = 0,count2=0;
    if(x1 - 1 > 0 ){
        count ++;
    }
    if(x1 + 1 <= n){
        count ++;
    }
    if(y1-1>0){
        count++;
    }
    if(y1+1<=m){
        count ++;
    }
    if(x2 - 1 > 0 ){
        count2 ++;
    }
    if(x2 + 1 <= n){
        count2 ++;
    }
    if(y2-1>0){
        count2++;
    }
    if(y2+1<=m){
        count2 ++;
    }
    cout<<min(count,count2)<<endl;

}
int main(){
    long long t;
    cin>>t;
    while(t--){
        maze();
    }
    return 0;
}