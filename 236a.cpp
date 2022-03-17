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
        int count=1;
        for(int j=i+1;j<l;j++){
            if(arr[i]==arr[j]){
                count++;
               
            }
        }
        same=same+count;
    }
    cout<<same;
    
    if(same%2==0){
    cout<<"CHAT WITH HER!";
    }
    else{ 
    cout<<"IGNORE HIM!";
    }
    return 0;
}