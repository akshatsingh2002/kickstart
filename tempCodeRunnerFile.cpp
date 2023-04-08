#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
void countof1()
{  
   int n;
   cin>>n;
   string s;
   cin>>s;
    int count1=0,count2=0;
    int prev=0;
    for(int i=0;i<n;i++){
        int newval;
        if(s[i] == '0'){
            newval = prev^0;
        }
        else{
            newval = prev^1;
        }
        prev = newval;
        if(newval == 1){
            count1++;
        }
    }
    prev = 1;
     for(int i=0;i<n;i++){
        int newval;
        if(s[i] == '0'){
            newval = prev^0;
        }
        else{
            newval = prev^1;
        }
        prev = newval;
        if(newval == 1){
            count2++;
        }
    }
    cout<<max(count1,count2)<<endl;


}
int main()
{
    int k;
    cin >> k;
    while (k != 0)
    {
        countof1();
        k = k - 1;
    }
    return 0;
}