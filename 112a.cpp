#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> arr;string temp;
    int result;
    for(int i=0;i<2;i++){
        
        cin>>temp;
        arr.push_back(temp);
    }
  
    
    for(int i=0;i<temp.length();i++){
        auto value1=arr[0].at(i);
        auto value2=arr[1].at(i);
 
    if(int(value1)+32==int(value2)||int(value1)-32==int(value2)||int(value1)==int(value2)){
      result=0;
    }
    else if(int(value1)<int(value2)){
result=-1;
break;
    }
    else{
    result =1;
    break;
    }
    }
    cout<<result;
    return 0;
}