#include<iosteram>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x,y,d;
    for(int i=0;i<n;i++){
        cin>>x>>y>>d;
        if(abs(x-y)<=d)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
