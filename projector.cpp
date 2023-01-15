#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
void mini(int a,int b,int c,int d){
int arr[4]={a,b,c,d};
sort(arr,arr+4);
cout<<arr[0]<<endl;
}
void findLength(){
    int w,d,h;
    int a,b,e,f;
    cin>>w>>d>>h;
    cin>>a>>b>>e>>f;
    int len1 = 0,len2 = 0,len3 = 0, len4 = 0;
    int ans1 =0,ans2=0,ans3=0,ans4=0;
    ans1 = a + h + e + abs(b-f);
    ans2 = (w-a) + h + (w-e) + abs(b-f);
    ans3 = b + h + f + abs(a-e);
    ans4 = (d-b) + h + (d-f) + abs(a-e);
    mini(ans1,ans2,ans3,ans4); 


}

int main(){
    int n;
    cin>>n;
    while(n!=0){
        findLength();
        n = n - 1;
    }
    return 0;
}