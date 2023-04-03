int swapindex = 0;
    for(int i=0;i<size;i++){
        int min = arr[i];
        for(int j = i;j<size;j++){
            if(arr[j]<min){
                min = arr[j];
                swapindex = j;
            }
        }
        swap(arr[i],arr[swapindex]);
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }