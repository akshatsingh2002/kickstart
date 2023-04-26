#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main(){
    string su;
    cin>>su;
    transform(su.begin(), su.end(), su.begin(), ::tolower);
    cout<<su;
    return 0;

}