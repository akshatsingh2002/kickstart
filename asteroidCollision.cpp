#include <iostream>
#include <vector>
using namespace std;
vector<int> myans(vector<int> ast)
{
    vector<int> ans;
    int top = ans.size()-1;
    int step = 0;
    for (int i = 0; i < ast.size(); i++)
    {
        if (i == 0)
        {
            ans.push_back(ast[i]);
            top++;
        }
        else if (ast[i] + ans[top] == 0 && ans[top]<0)
        {
            ans.pop_back();
            top--;
            step = 1;
        }
        else if (ast[i] * ans[top] < 0)
        {
            if (abs(ast[i]) > abs(ans[top]) )
            {
                ans.pop_back();
                ans.push_back(ast[i]);
                
            }
            step = 1;
        }
        else
        {
            ans.push_back(ast[i]);
            top++;
        }
    }
    if(step == 1){
        return myans(ans);
    }
    else{
        return ans;
    }
}
vector<int> asteroidCollision(vector<int> &ast)
{
    vector<int> tmp = myans(ast);

    return tmp;
}

int main()
{
    vector<int> arr = {-2, -1, 1, 2};
    vector<int> final;
    final = asteroidCollision(arr);
    for (int i = 0; i < final.size(); i++)
    {
        cout << final[i] << ' ';
    }
    cout << endl;
    return 0;
}