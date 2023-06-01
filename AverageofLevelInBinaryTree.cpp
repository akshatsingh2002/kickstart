
#include<iostream>
#include<vector>
using namespace std;
 struct TreeNode
  {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

  class Solution
  {
  public:
      vector<double> averageOfLevels(TreeNode *root)
      {
          vector<TreeNode *> current, next;
          vector<double> avg;
          current.push_back(root);
          while (current.size())
          {
              double ans = 0;
              for (auto itr : current)
              {
                  ans += itr->val;
                  if (itr->right != NULL)
                  {
                      next.push_back(itr->right);
                  }
                  if (itr->left != NULL)
                  {
                      next.push_back(itr->left);
                  }
              }
              avg.push_back(ans / current.size());
              swap(next, current);
              next.clear();
          }
          return avg;
      }
  };


  int main(){
    Solution obj;
    

  }