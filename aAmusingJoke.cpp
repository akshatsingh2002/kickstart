#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void joke(){
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    int l1,l2,l3;
    int con = 0;
    l1 = str1.length();
    l2 = str2.length();
    l3 = str3.length();
    if(l1+l2!=l3){
        cout<<"NO";
    }
    else{
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        sort(str3.begin(),str3.end());
        // cout<<str1<<endl<<str3<<endl;
        for(int i=0;i<l1;i++){
            for(int j=i;j<l3;j++){
                if(str1.at(i)==str3.at(j)){
                    str3.at(j) = 0;
                    con ++;
                    break;
                }
            }
        }
        // cout<<"CON"<<con;
        if(con == l1){
            con = 0;
            for(int i=0;i<l2;i++){
            for(int j=0;j<l3;j++){
                if(str2.at(i)==str3.at(j)){
                    con ++;
                    break;
                }
            }

        }
        if(con == l2){
            cout<<"YES";
        }
        else
        cout<<"NO";
    }
    else
    cout<<"NO";
}
}



int main(){
    joke();
    return 0;
}