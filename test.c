// #include<stdio.h>

// int main(){
//   int val=1000;
//   int con=0;
//   printf("Enter the number to check where its prime or not:");
// for(int k=2;k<=1000;k++){
//     con = 0;
//     for(int i=2;i<=k/2;i++){
//         if(k%i==0){
//             con++;
//             break;
//         }
//     }
//   if(con == 0){
//     printf("%d ",k);
//   }
 
// }
// return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//   char arr[20]={};
//   gets(arr);
//   printf("%s",arr);
//   int size = strlen(arr);
//   printf("%d",size);
//   for(int i=size-1;i>=0;i--){
//       printf("%c",arr[i]);

//   }

//   return 0;
// }

#include<stdio.h>
int main(){
  int arr[10];
  for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
  }
  int max;
  int temp;
  for(int i=0;i<10;i++){
        max=arr[i];
    int pos = -1;
    for(int j=i+1;j<10;j++){
      if(arr[j]>max){
        max = arr[j];
        pos = j;
      }
    }

    if(pos != -1){
    temp = arr[i];
    arr[i]= arr[pos];
    arr[pos] = temp;
    }
  }
  for(int i=0;i<10;i++){
    printf("%d ",arr[i]);
  }
  return 0;
}