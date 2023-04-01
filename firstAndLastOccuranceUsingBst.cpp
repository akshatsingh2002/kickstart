#include <iostream>
#include <algorithm>
using namespace std;
void bst(int arr[], int size, int val)
{
    int intial=-1,final1=-1;
    for(int i=0;i<size;i++){
        if(intial == - 1){
            if(arr[i] == val){
                intial = i;
            }
        }
        if(intial != -1 && arr[i] != val){
            final1 = i - 1;
            break;
        }
    }
    cout<<intial<< " "<<final1<<endl; 
}
int main()
{
    int arr[10] = {1, 2, 3, 3, 3, 5, 5, 6, 7, 8};
    bst(arr, 10, 5);
    return 0;
}
