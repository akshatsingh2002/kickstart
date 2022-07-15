#include<bits/stdc++.h>
using namespace  std;
int main(){
    int face=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="Tetrahedron")
        face=face+4;
       else if(s=="Cube")
        face=face+6;
       else if(s=="Octahedron")
        face=face+8;
       else if(s=="Dodecahedron")
        face=face+12;
        else 
        face=face+20;

    }
    cout<<face;
    // for(int i=0;i<n;i++){
    //     cout<<str.at(i)<<endl;
    // }

    return 0;
}