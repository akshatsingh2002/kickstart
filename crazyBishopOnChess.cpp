#include <iostream>
using namespace std;
void chess()
{
    long long n;
    cin >> n;
    long long ans = 2,ans1 = 0;
    if (n <= 2)
    {
        cout << 0 << endl;
    }
    else if (n == 4)
    {
        cout << 3 << endl;
    }
    else if (n == 3)
    {
        cout << 2 << endl;
    }
    else
    {
        for(int i=3;i<=n-1;i++){
            if(i%2!=0){
                ans1 ++;
            }
            else{
                ans = ans  + 2;
            }
        }
    }
    cout<<ans1+ans<<endl;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        chess();
    }
    return 0;
}
