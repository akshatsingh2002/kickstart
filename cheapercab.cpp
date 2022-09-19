#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
    int a=0,b=0;
	for(int i=0;i<n;i++){
        cin>>a;
        cin>>b;
        if(a<b)
        cout<<"FIRST";
        else if (a==b)
        cout<<"ANY";
        else
        cout<<"SECOND";
	cout<<"\n";
	}
	
	return 0;
}
