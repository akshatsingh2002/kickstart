    #include <iostream>
    using namespace std;
    void sticks()
    {
        int n, m;
        cin >> n >> m;
        int count  = 0;
        while(n!=0 && m!=0){
            n = n - 1;
            m = m - 1;
            count ++;
        }  
        if(count%2==0){
            cout<<"Malvika";
        }
        else
        cout<<"Akshat";

    }
    int main()
    {
        sticks();
        return 0;
    }