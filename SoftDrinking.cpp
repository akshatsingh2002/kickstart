#include<iostream>
#include<algorithm>
using namespace std;
void func(){


}
int main(){
    long long int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    long long tot_vol = l*k;
    long long tot_slc = c*d;
    long long arr[3]={0};
    if(tot_vol>=(nl*n))
    arr[0]=(tot_vol/nl)/n;
    if(tot_slc>=n)
    arr[1]=tot_slc/n;
    if(p>=(np*n))
    arr[2]=(p/np)/n;
    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    sort(arr,arr+3);
    cout<<arr[0]<<endl;
    return 0;
}