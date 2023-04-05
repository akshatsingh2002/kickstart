#include<iostream>
#include<math.h>

using namespace std;
void belt(){
    int n ,x1,y1,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;
    if(x1>n/2){
        x1 = n - x1 + 1;
    }
    if(x2>n/2){
        x2 = n - x2 + 1;
    }
    
    
    if(y1>n/2){
        y1 = n - y1 + 1;
    }
    
    
    if(y2>n/2){
        y2 = n - y2 + 1;
    
    }
    int ans1 = abs(x1-x2);
    int ans2 = abs(y2-y1);

    cout<<max(ans1,ans2);
    cout<<endl;
    
    }
int main()
{   
    int k;
    cin>>k;
    while(k--){
        belt();
    }
    return 0;
}