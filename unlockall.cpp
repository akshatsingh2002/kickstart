#include<bits/stdc++.h>
using namespace std;
bool dfs(vector<vector<int>> &boxes, vector<bool> &visited, unordered_set<int> &keys, int box);
bool canUnlockAll(vector<vector<int>> &boxes)
{
    int n = boxes.size();
    vector<bool> visited(n, false);
    visited[2] = true; // Box 2 is already unlocked

    unordered_set<int> keys;
    keys.insert(2); // Initially, we have the key to box 2

    return dfs(boxes, visited, keys, 2);
}

bool dfs(vector<vector<int>> &boxes, vector<bool> &visited, unordered_set<int> &keys, int box)
{
    // Check if we have visited all boxes
    if (keys.size() == boxes.size())
        return true;

    // Iterate through the keys in the current box
    for (int key : boxes[box])
    {
        // If we haven't visited this box before and we have the key to it
        if (!visited[key] && keys.count(key))
        {
            visited[key] = true;
            keys.insert(key);
            if (dfs(boxes, visited, keys, key))
                return true;
        }
    }

    return false;
}

int canUnlockAllBoxes(vector<vector<int>> boxes)
{
    if (canUnlockAll(boxes))
    {
        return 1;
    }
    return 0;
    
}

int main(){
    vector<vector<int>> arr={{1,2,3},{1,2,3},{1,2,3}};
    bool ans = canUnlockAll(arr);
    cout<<ans<<endl;
    return 0;
}