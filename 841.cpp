#include<iostream>
#include<algorithm>
using namespace std;
// void joey(int n){
//     int arr[n];
//     long long  ans=1;
// for(int i=0;i<n;i++){
//     cin>>arr[i];
//     ans = ans * arr[i] ;

// }
// cout<<(ans+n-1)*2022;
// }
// int main(){
//     int n;
//     cin>>n;
//     while (n!=0)
//     {
//         int j;
//         cin>>j;
//         joey(j);
//         n=n-1;
//     }
    
//     return 0;
// }



void demdogs(){
    long long n;
    cin>>n;
   long long ans=1;
    int i=1,j=1;
    while(i,j<n){
        ans = ans + (i+1)*j + (i+1)*(j+1)+(i+1)*(j+2)+(i+2)*(j+2);
        i = i + 2;
        j = j + 2;
    }
    cout<<ans<<endl;
    }

int main(){
    int j;
    cin>>j;
    while(j!=0){
        demdogs();
        j = j - 1;
    }
    return 0;
}