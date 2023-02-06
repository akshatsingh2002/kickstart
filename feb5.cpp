#include<iostream>
using namespace std;
void deck(){
    int n;
    cin>>n;
    int sum1,sum2;
    int alt = 1;
    for(int i=2;i<=n;i++){
        if(sum1+sum2<n){
        if(alt == 6){
            alt = 2 ;
        }
        if(alt == 2 || alt == 3){
            sum2 = sum2 + i;
            alt ++;
        }
        else if(alt == 4 || alt == 5){
            sum1 = sum1 + i;
            alt ++;
        }
        }
        else{
            if(alt == 2 || alt == 3){
            sum2 = n - sum2 + sum1;
        }
            else if(alt == 4 || alt == 5){
            sum1 = n - sum2 + sum1;
            alt ++;
        }
            break;


    }
}
cout<<sum1<<" "<<sum2;
}
int main(){
    int n;
    cin>>n;
    while(n!=0){
        deck();
        n = n - 1;
    }
    return 0;
}