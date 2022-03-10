#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,k,l,moves=0,arr[5][5];
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        cin>>arr[i][j];
    }
}
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        if(arr[i][j]!=0){
k=i;
l=j;
break;
        }
    }
}

if(k<2){
    for(;k<2;k++){
        moves++;
    }
}
if(k>2){
    for(;k>2;k--){
        
        moves++;
    }
}
if(l<2){
    for(;l<2;l++){
        
        moves++;
    }
}
if(l>2){
    for(;l>2;l--){
    
        moves++;
    }
}
  
  cout<<moves;

   
    return 0;
}