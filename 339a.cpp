#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;

    cin>>s;
   

    int l=s.length();
 
    char arr[l];
    for(int i=0;i<l;i++){
        arr[i]=s[i];

    }
    for(int i=0;i<l-1;i++){
      for(int j=0;j<l-i-1;){
        if(int(arr[j])>int(arr[j+2])){
            int temp=arr[j];
            arr[j]=arr[j+2];
            arr[j+2]=temp;
           
        }
         j=j+2;
        }
    }
   
      
    for(int i=0;i<l;){
        cout<<arr[i];
        if(i<l-2)
        cout<<"+";
        i=i+2;
    }
    
    return 0;
}