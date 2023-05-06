#include<iostream>
#include<vector>
using namespace std;
 int compress(vector<char>& chars) {
        for(int i=1;i<chars.size();i++){
            int coun = 1;
            if(chars[i]==chars[i-1]){
                coun ++;
            }
        }
    }

int main(){
    vector<char> arr = {'a','b','b','c','c','c'};
    compress(arr);
    cout<<arr.size();

    return 0;
}