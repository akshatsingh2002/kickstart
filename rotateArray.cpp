#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<int> &nums, int k)
{
    vector<int> arr;
    if (k > nums.size())
    {
        k = k % nums.size();
    }
    for (int i = nums.size() - k; i < nums.size(); i++)
    {
        arr.push_back(nums[i]);
    }
    for (int i = 0; i < nums.size() - k; i++)
    {
        arr.push_back(nums[i]);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        nums[i] = arr[i];
        cout << (nums[i]) << " ";
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
    rotate(arr, 3);
    return 0;
}
