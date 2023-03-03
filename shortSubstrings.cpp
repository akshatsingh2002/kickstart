#include<iostream>
#include<string>
using namespace std;
void shorts(){
    string s;
    cin>>s;
    int l = s.length();
    for(int i=0;i<l;){   
        cout<<s[i];
        i = i +2;
    
    }
    cout<<s[l-1];
    cout<<endl;

}
int main(){
    int n;
    cin>>n;
    while(n!=0){
        shorts();
         n = n - 1;

    }
return 0;
}