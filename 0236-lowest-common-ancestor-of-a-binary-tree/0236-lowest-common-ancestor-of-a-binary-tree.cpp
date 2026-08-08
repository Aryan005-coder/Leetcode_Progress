/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    private:
   TreeNode* check_ancestor(TreeNode* root , TreeNode* p , TreeNode*q)
    {
        if(root == nullptr)return nullptr;
        if(root == p || root == q)return root;
        
       TreeNode* left =  check_ancestor(root->left , p , q);
       TreeNode* right =  check_ancestor(root->right , p , q);
         
         if(left != nullptr && right != nullptr)return root;

         if(left != nullptr)return left;

         return right;

 
      
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return check_ancestor(root , p , q);
    }
};