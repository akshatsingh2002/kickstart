//Given an integer n, return true if it is a power of two. Otherwise, return false.

//An integer n is a power of two, if there exists an integer x such that n == 2x.
#include<iostream>
#include<math.h>

using namespace std;
    bool isPowerOfTwo(int n) {
        int j = 2;
        if(n==1 || n == 2){
            return true;
        }
        else if(n%2==0){
            while(j<=n){
                if(n==j){
                    return true;
                    break;
                }
                j = j*2;
                // cout<<j<<endl;
            }
        }
        else 
        return false;

        
    }
    int main(){
        int n;
        cin>>n;
        cout<<isPowerOfTwo(n);
        return 0;
    }