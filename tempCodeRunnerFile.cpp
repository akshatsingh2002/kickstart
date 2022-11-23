int mask=0;
   cin>>n;
   int j = ~n;
   while(n!=0){
    n = n >> 1;
    mask = mask|1;
    mask = mask << 1;
    // cout<<mask<<endl;
   }
   mask = mask >> 1;
//    cout<<mask;
   cout<<(j&mask);