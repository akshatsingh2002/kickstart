#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin, s); // inputs string with spaces
    int value;
    cin >> value; // number of choclates bittu has
    string temp;
    vector<int> arr; // array storage
    for (std::string::size_type i = 0; i < s.length(); i++)
    { // converting string number to elements in array as spererated by spaces
        if (s[i] == ' ')
        { // when space is found push the string into the array as an integer
            int val = stoi(temp);
            arr.push_back(val);
            temp.clear();
        }
        else
        {
            temp = temp + s[i]; // if space is not found the countiue with the adding of the string
        }
    }
    if (temp.empty() != true)
    { // inserting the last value in the array because there will be no spaces at the end the last element will never be inserted
        int val = stoi(temp);
        arr.push_back(val);
    }
    sort(arr.begin(), arr.end()); // sorting the array for the largest value as well as to get a presum array
    int max = value + arr[arr.size() - 1];
    vector<int> presum;
    presum.push_back(arr[0]);
    for (std::vector<int>::size_type i = 1; i < arr.size(); i++)
    { // generating a presum array
        presum.push_back(arr[i] + presum[i - 1]);
    }
    int count = 0; // the first point descreaes during the generation of max value
    for (std::vector<int>::size_type i = 0; i < presum.size(); i++)
    {
        if (presum[i] <= max)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    if(count==0){
        cout<<1<<endl;
    }
    else{
        cout<<count<<endl;
    }
    return 0;
}