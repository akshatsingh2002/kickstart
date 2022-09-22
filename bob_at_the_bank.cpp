#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int initial,deposit,deducted,time,total;
        cin>>initial>>deposit>>deducted>>time;
        total = initial;
        total = total +(time*deposit) - (time*deducted);
        cout<<total<<endl;
    }
    return 0;
}