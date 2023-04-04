#include<iostream>
#include<string>
using namespace std;
void digit(){
    int n;
    cin>>n;
    char a;
    cin>>a;
    string s;
    cin>>s;
    int con = 0;
    for(int i=0;i<n;i++){
        if(int(a)>int(s[i]) && con == 0 && a!='0'){
            cout<<a;
            con = 1;
        }
        cout<<s[i];
    }
    if(a=='0' || con == 0){
        cout<<a;
    }
    cout<<endl;

}
int main(){
    int k;
    cin>>k;
    while (k!=0)
    {
        digit();
        k = k - 1;
    }
    return 0;
}