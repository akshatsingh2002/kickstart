#include<iostream>
#include<map>
#include<vector>
using namespace std;
void olymp(){
        long long n;
        cin>>n;
        map<int,vector<int>> mymap;
        for(int i=0;i<n;i++){
                int val;
                cin>>val;
                if(mymap.find(val)!=mymap.end()){
                        mymap[val].push_back(i);
                }
                else{
                        mymap[val].push_back(i);
                }
        }
        for(auto itr:mymap){
                cout<<
        }

}