#include<bits/stdc++.h>
using namespace std;
void toast(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int totSlices = c * d;
    int totalMil= l * k; 
    cout<<totSlices<<totalMil<<endl;
    int toast1 = totalMil / n;
    int ans = min(totSlices,np);
    cout<<ans;
    ans = min (ans , toast1);
    cout<<ans/n;
}
int main(){
    toast();
    return 0;
}