    #include <iostream>
    #include <algorithm>
    using namespace std;
    void detect()
    {
        int n;
        cin >> n;
        int arr[n];
        int index;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i >= 2)
            {
                if (arr[i - 2] != arr[i - 1] && arr[i - 2] != arr[i])
                {
                    index = i - 2;
                }
                else if (arr[i - 1] != arr[i - 2] && arr[i - 1] != arr[i])
                {
                    index = i - 1;
                }
                else if (arr[i] != arr[i - 2] && arr[i] != arr[i - 1])
                {
                    index = i;
                }
            }
        }
        index = index + 1;
        cout << index << endl;
    }

    int main()
    {
        int k;
        cin >> k;
        while (k != 0)
        {
            detect();
            k = k - 1;
        }
        return 0;
    }