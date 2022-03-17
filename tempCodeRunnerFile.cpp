#include<bits/stdc++.h>
using namespace std;
int main(){
    int same=0;
    string s;
    cin>>s;
    int l=s.length();
    char arr[l];
    for(int i=0;i<l;i++){
        arr[i]=s.at(i);
    }
    for(int i=0;i<l-1;i++){
        for(int j=i+1;j<l-i;j++){
            if(arr[i]==arr[j]){
                same++;
                break;
            }
        }
    }
    int final=l-same;
    if(final%2==0){
    cout<<"CHAT WITH HER!";
    }
    else{ 
    cout<<"IGNORE HIM!";
    }
    return 0;
}