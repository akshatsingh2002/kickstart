#include <iostream>
#include <vector>
#include<string>
#include<cstring>
using namespace std;
int compress(vector<char> &chars)
{
    int final = 0;
    int count = 1;
    string str;
    for(int i=1;i<chars.size();i++){
        cout<<chars[i]<<endl;
        if(chars[i]==chars[i-1] &&(i!=chars.size()-1)){
            count ++;
        }
        else{
            if(chars[i]==chars[i-1]){
                count++;
            }
            if(count !=1){
                str = str+chars[i-1];
                str = str+   to_string(count);
            }
            else{
                str = str + chars[i-1];
            }
            count = 1;
        }
    }

}

int main()
{
    vector<char> arr = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    compress(arr);

    return 0;
}