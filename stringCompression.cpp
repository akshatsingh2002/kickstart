#include <iostream>
#include <string>
#include <vector>
using namespace std;

int compress(vector<char> &chars)
{
     vector<char> temp;
            int count = 1;
            for(int i=0;i<chars.size()-1;i++){
                if(chars[i]==chars[i+1]){
                    count ++;
                }
                if(i==chars.size()-2){
                    if(chars[i]==chars[i+1]){
                        count ++;
                    }
                }
                else{
                    if(count == 1){
                        temp.push_back(chars[i]);
                    }
                    else{
                        temp.push_back(chars[i]);
                        string val = to_string(count);
                        temp.push_back(val);
                        count = 1;
                    }
                }
            }
            chars.clear();
            chars = temp;
            return temp.size();
}

int main()
{
   vector<char> arr = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
   compress(arr);
   cout<<"final ouput"<<endl;
   for (int i = 0; i < arr.size(); i++)
   {
      cout << arr[i] << endl;
   }
   return 0;
}