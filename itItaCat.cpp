#include<iostream>
using namespace std;
void checkstring(){
    int n;
    int i,j,k,l,count = 0;
    int con1 = 0,con2=0,con3=0,con4= 0;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    for(i=0;i<n;i++){
        if(s[i]=='M' || s[i]=='m'){
            count ++;
            // cout<<"LOOP1"<<" "<<count;
            con1 = 1;       
             }

        else 
        break;
    }

     for (j=i;j<n;j++){
        if(s[j]=='E' || s[j]=='e'){
            count ++;
            // cout<<"LOOP2"<<" "<<count;
            con2 = 1;
        }
        else 
        break;
    }
     for(k=j;k<n;k++){
        if(s[k]=='O' || s[k]=='o'){
            count ++;
            // cout<<"LOOP3"<<" "<<count;  
            con3 = 1;
        }
        else 
        break;
    }
     for(l=k;l<n;l++){
        if(s[l]=='W' or s[l]=='w'){
            count ++;
            // cout<<"LOOP4"<<" "<<count; 
            con4 = 1; 
        }

    }
    if(count == n && con1 == 1 && con2 == 1 && con3 == 1 && con4 == 1){
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
    
}
int main(){
    int n;
    cin>>n;
    while(n!=0){
        checkstring();
        n = n - 1;
    }
    return 0;
}