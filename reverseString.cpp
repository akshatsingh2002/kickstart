#include<iostream>
#include<vector>
using namespace std;
void reverseString(vector<char>& s) {
        vector<char> arr;
        for(int i=s.size()-1;i>=0;i--){
            arr.push_back(s[i]);
        }
        for(int i=0;i<arr.size();i++){
            s[i]=arr[i];
            cout<<arr[i];
        }
    }

int main(){
    vector<char> s={'h','e','l','l','o'};
    reverseString(s);
    return 0;
}