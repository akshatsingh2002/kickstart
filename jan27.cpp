#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// void pi(){
//     string n = "314159265358979323846264338327";
//     string d;
//     cin>>d;
//     int count = 0;
//     int l = n.length();
//     for(int i =0;i<l;i++){
//         if(n[i]==d[i]){
//             count++;
//         }
//         else
//         break;
//     }
//     cout<<count<<endl;
// }

void dice(){
    int n,r,s;
    cin>>n>>s>>r;
    cout<<s-r<<" ";
    int ans = r/n;
    int j = n;
    while(n!=1){
        if(r>6){
            cout<<"6"<<" ";
            r = r - 6;
        }
        else {
        cout<<r%6-n;
        r = r - r&6;
        }
        n = n - 1;
}
cout<<endl;

}
int main(){
    int n;
    cin>>n;
    while(n!=0){
        dice();
        n = n -1;
    }
    return 0;
}