/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
    int helper(TreeNode* root , int ans , int CurrMax)
    {
        if(root == nullptr)return 0;
       int root_ans = 0;
        if(root->val >= CurrMax)
        {   
          root_ans = 1;
            CurrMax = root->val;
            }

        int left = helper(root->left , ans , CurrMax);
         int right = helper(root->right , ans , CurrMax);

         return left + right + root_ans;

    }
public:
    int goodNodes(TreeNode* root) {
       return helper(root , 0 , INT_MIN);
    }
};