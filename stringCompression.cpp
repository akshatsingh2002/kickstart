#include <iostream>
#include <vector>
using namespace std;
int compress(vector<char> &chars)
{
  int final=0;
  int count = 1;
  for(int i=0;i<chars.size()-1;i++){
        if(chars[i]==chars[i+1] || i!=chars.size()-1){
            count++;
        }
        else{
            if(count>=100){
                final = final + 4;
            }
            else if(count>=10){
                final = final + 3;
            }
            else if(count>=2){
                final = final + 2;
            }
            else{
                final = final + 1;
            }
            count = 1;
        }
  }
  cout<<final<<endl;

}

int main()
{
    vector<char> arr = {'a','a','b','b','c','c','c'};
    compress(arr);

    return 0;
}