#include<iostream>
#include<string.h>
using namespace std;
  int hammingWeight(uint32_t n) {
    int count=0;
    string str1 = to_string(n);
    cout<<str1;
    for(int i=0;i<31;i++){
      if(str1[i]=='1'){
        count++;
      }
    }


    return count;
        
    }
int main(){
    uint32_t n;
    cin>>n;
    cout<<hammingWeight(n);
    return 0;
}