#include<iostream>
using namespace std;
  int hammingWeight(uint32_t n) {
    int count=0;
    for(int i=0;i<31;i++){
        if(n&1){
            count++;
        }

        n=n>>1;
        cout<<n<<endl;
    }
    return count;
        
    }
int main(){
    uint32_t n;
    cin>>n;
    cout<<hammingWeight(n);
    return 0;
}