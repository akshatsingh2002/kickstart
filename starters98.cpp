#include <bits/stdc++.h>
using namespace std;
// void football(){
//     long long   a,b,x,y;
//     cin>>a>>b>>x>>y;
//     long long ans1 =a*2 + b;
//     long long ans2 =x*2+ y;
//     if(ans1==ans2){
//         cout<<"Equal"<<endl;
//     }
//     else if(ans1>ans2){
//         cout<<"Missi"<<endl;
//     }
//     else{
//         cout<<"Ronaldo"<<endl;
//     }
// }
// void enoughspace(){
//     long long n,x,y;
//     cin>>n>>x>>y;
//     long long ans = x + y*2;
//     if(ans<=n){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
// }

void waitingTime()
{
    long long k, x;
    cin >> k >> x;
    k = k * 7;
    cout << k - x<<endl;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        waitingTime();
    }
    return 0;
}
