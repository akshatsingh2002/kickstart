#include<iostream>
#include<vector>
using namespace std;
void candies(){
    int n;
    cin>>n;
    int val = 1;
    vector<int> arr;
    int pc = 1;
    while(pc<=40){
        if(2*val + 1 == n){
            arr.push_back(1);
            val = 2*val + 1;
        }
        else if(2*val - 1 == n){
            arr.push_back(2);
            val 
        }

    }
}