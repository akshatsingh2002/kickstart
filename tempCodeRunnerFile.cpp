    bool isPowerOfTwo(int n) {
        int j = 2;
        if(n==1 || n == 2){
            return true;
        }
        else if(n%2==0){
            while(j<=n){
                if(n==j){
                    return true;
                    break;
                }
                j = j*2;
                // cout<<j<<endl;
            }
        }
        else 
        return false;

        
    }