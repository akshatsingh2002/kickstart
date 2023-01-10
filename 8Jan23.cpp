code
// void ugly()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int sum = 0 , flag = 0,temp;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
       
//     }
//     for(int i=0;i<n;i++){
//          if(i>0 && arr[i]==arr[i-1]){
//             flag = 0;
//         }
//         else if(i>0){
//             temp = arr[0];
//             flag = 1;
//             break;
//         }
//     }
//     if(flag == 0)
//     cout<<"NO"<<endl;
//     else{
//         cout<<"YES"<<endl;
//         cout<<temp<<" ";
//         for(int i=n-1;i>=1;i--){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }

// }
// int main()
// {
//     int n;
//     cin >> n;
//     while (n != 0)
//     {
//         ugly();
//         n = n - 1;
//     }
//     return 0;
// }

void matrix(){
    int n;
    cin>>n;
    int arr[n][n];
    int t = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j==0){
                cout<<n*n<<" ";
            }
            else
            cout<<t<<" ";
            t = t + 1;
            }
            cout<<endl;
        }
    }

int main(){
    int n;
    cin>>n;
    while(n!=0){
        matrix();
        n =n -1;
    }
}