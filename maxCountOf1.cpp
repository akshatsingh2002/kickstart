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
    int count1=0;
    int prev=0;
    for(int i=0;i<n;i++){
        int newval;
        if(s[i] == '0'){
            newval = prev^0;
        }
        else{
            newval = prev^1;
        }

        if(newval == 1){
            count1++;
        }
    }
    if(count1>n/2){
        cout<<count1<<endl;
    }
    else{
        cout<<n-count1<<endl;
    }


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