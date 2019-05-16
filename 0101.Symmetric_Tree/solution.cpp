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
public:
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        else
            return preOrderTraverse_r(root->left, root->right);
    }
    bool preOrderTraverse_r(TreeNode *lhs, TreeNode *rhs) {
            if(!lhs || !rhs)
            {
                if(!lhs && !rhs)
                    return true;
                else
                    return false;
            }     
            if(lhs->val != rhs->val)
                return false;
            if(preOrderTraverse_r(lhs->left, rhs->right))
                if(preOrderTraverse_r(lhs->right, rhs->left))
                    return true;
            return false;
    }
};