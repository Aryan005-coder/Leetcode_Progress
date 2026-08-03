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
    int ans = INT_MIN;
    int maxSum(TreeNode* root  )
    {
       if(root == nullptr)return 0;
       
       int left = max(0 , maxSum(root->left));
       int right = max(0 , maxSum(root->right));

       ans = max(ans , left + right + root->val);

       return root->val + max(left , right);
    }
public:

    int maxPathSum(TreeNode* root) {

        maxSum(root);
     return ans;

    }
};