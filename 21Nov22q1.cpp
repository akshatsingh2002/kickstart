// #include<iostream>
// using namespace std;
// void medium(int a,int b,int c){
//     if((a<b && a>c) || (a<c && a>b)){
//         cout<<a;
//     }
//     else if((b<a && b>c) || (b<c && b>a)){
//         cout<<b;
//     }
//     else
//     cout<<c;

// }
// int main(){
//     int n;
//     cin>>n;
//     while(n!=0){
//         int a,b,c;
//         cin>>a>>b>>c;
//         medium(a,b,c);
//         cout<<endl;
//         n--;
//     }
//     return 0;
// }
#include<iostream>
#include<algorithm>
using namespace std;
void calculate(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      sort(arr,arr+n);
    //   cout<<arr[n-1];
    cout<<int(arr[n-1])-96<<endl;

}
int main(){
    int j;
    cin>>j;
    while(j!=0){
        calculate();
        j--;
            }
    
  
    return 0;
}

// #include<iostream>
// #include<algorithm>
// using namespace std;
// void calculate(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int sortedArr[n];
//     int max =0, secondMax =0, maxIndex=0;   
//     for(int i =0;i<n;i++){
//         cin>>arr[i];
//         if(arr[i]>max){
//             max = arr[i];
//             maxIndex = i;
//         }
       
//     }
//     copy(arr,arr+n,sortedArr);
//     sort(sortedArr,sortedArr+n);
//     secondMax = sortedArr[n-2];
//     for(int j =0 ;j<n;j++){
//         if(j==maxIndex){
//             cout<<arr[j]-secondMax;
//         }

//         else
//         cout<<arr[j]-max;

//         cout<<" ";
//     }

// }
// int main(){
//     int n;
//     cin>>n;
//     while(n!=0){
//         calculate();
//         n--;
//         cout<<endl;

//     }
//     return 0;
// }