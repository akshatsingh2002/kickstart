#include<iostream>
#include<math.h>
using namespace std;
void recurit(){
    int n;
    cin>>n;
    int val = 0;
    int police=0;
    int crimes = 0;
    for(int i=0;i<n;i++){
        cin>>val;
        if(val == -1 && police == 0){
            crimes ++; 
        }
        else if(police>0 && val == -1){
            police --;
        }
        else{
            police = police + val;
        }

    }
    cout<<crimes;

}
int main(){
    recurit();
    return 0;
}