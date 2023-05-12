#include <iostream>
#include <vector>
#include<string>
using namespace std;
int compress(vector<char> &chars)
{
    int final = 0;
    int count = 1;
    string str;
    for(int i=0;i<chars.size()-1;i++){
        if(chars[i]==chars[i+1]){
            count ++;
        }
        else{
            if(count !=1){
                str = str+chars[i];
                str = str+   to_string(count);
            }
            else{
                str = str + chars[i];
            }
            count = 1;
        }
    }
    cout<<str<<endl;
}

int main()
{
    vector<char> arr = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    compress(arr);

    return 0;
}