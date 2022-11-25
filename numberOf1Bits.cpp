#include<iostream>
using namespace std;
  int hammingWeight(uint32_t n) {
    int count=0;
    for(int i=0;i<32;i++){
        if(n&1){
            count++;
        }

        n>>1;
    }
    return count;
        
    }
int main(){
    uint32_t n;
    cin>>n;
    cout<<hammingWeight(n);
    return 0;
}