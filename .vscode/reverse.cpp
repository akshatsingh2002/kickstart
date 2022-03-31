#include<bits/stdc++.h>//use string.h for normal case
using namespace std;
int main(){
    char s[20],s2[20];
    cin>>s;
    
    int l=0;
    for(int i=0;s[i]!='\0';i++){// \0 represents null in charcter array S
        l++;
    }
    for(int i=0;i<l;i++){
        s2[i]=s[i];
    }
    for(int j=0,i=l-1;i>j;i--,j++){// because of the way indexing works we use l-1
        swap(s[i],s[j]);
    }
    cout<<s2;
    return 0;
}