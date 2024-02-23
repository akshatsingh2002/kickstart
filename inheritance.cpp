#include<iostream>
using namespace std;
class base{
public:
int a , b;
void get_data(int val1 , int val2){
a = val1;
b = val2;
}
void print_data(){
    cout<<a<<" "<<b;
}};
class derived:public base{
    public:
    void print_data(){
        cout<<"Derived class";
    }
};
int main(){
derived obj1;
obj1.get_data(10,20);
obj1.print_data();
return 0;
}