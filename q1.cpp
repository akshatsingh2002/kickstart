#include<bits/stdc++.h>
using namespace std;
int isSubstring(string s1, string s2)
{
    // using find method to check if s1 is// stolen from gfg
    // a substring of s2
    if (s2.find(s1) != string::npos)
        return 1;
    return -1;
}
int main(){
   string s1, s2;
   cin>>s1>>s2;
   string temp;
   string answer;
   string prev;
   for(int i=0;i<s1.length();){
      prev = temp;
      temp += s1[i];

      int val = isSubstring(temp,s2);
      if(val == 1){
         i++;
         continue;
      }
      else{
         answer += prev + '|';
         temp = "";
      }


   }
   cout<<answer;
   return 0;
}
