#include<iostream>
using namespace std;
long radius1,radius2,speed1,speed2,time=0,time1=0,time2=0,d,distance1,distance2,temp_ditance1,temp_ditance2;
int main(){
    cin>>radius1;
    cin>>radius2;
    cin>>speed1;
    cin>>speed2;
    cin>>time;
    cin>>d;
    distance1=2*3.141592653589793*radius1;
    temp_ditance1=distance1;
    cout<<distance1;
    distance2=2*3.141592653589793*radius2;
    temp_ditance2=distance2;
    cout<<distance2;
    cout<<endl<<speed1<<" "<<speed2;
    for(;time1<=time;){
        time1=distance1/speed1;
        cout<<endl<<time1;
        distance1=distance1+distance1;
        time2=distance2/speed2;
        distance2=distance2+distance2;
        if(time1==time2)
        break;
    }
    cout<<time1;
    if(distance1%temp_ditance1==0)
    cout<<" E";
    else 
    cout<<" F";
    return 0;
}
