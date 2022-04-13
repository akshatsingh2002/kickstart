#include<bits/stdc++.h>
using namespace std;
int main(){
    long long arr[3],max=0,ex1,ex2,ex3,ex4,ex5;
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
ex1=arr[0]+arr[1]*arr[2];
ex2=arr[0]*(arr[1]+arr[2]);
ex3=arr[0]*arr[1]*arr[2];
ex4=(arr[0]+arr[1])*arr[2];
ex5=arr[0]+arr[1]+arr[2];
if(ex1>=ex2&&ex1>=ex3&&ex1>=ex4&&ex1>=ex5)
max=ex1;
else if(ex2>=ex1&&ex2>=ex3&&ex2>=ex4&&ex2>=ex5)
max=ex2;
else if(ex3>=ex1&&ex3>=ex2&&ex3>=ex4&&ex3>=ex5)
max=ex3;
else if(ex4>=ex1&&ex4>=ex2&&ex4>=ex3&&ex4>=ex5)
max=ex4;
else
max=ex5;
cout<<max;
return 0;
}