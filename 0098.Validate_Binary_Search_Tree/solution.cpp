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
    bool isValidBST(TreeNode* root) {
        int last_value = INT_MIN;
        bool unreached_leaf = true;
        if(!root)
            return true;
        else
            return dfs_r(root, last_value, unreached_leaf);
    }
    bool dfs_r(TreeNode* node, int &last_value, bool &unreached_leaf) {
        if(node->left) {
            if(dfs_r(node->left, last_value, unreached_leaf) == false)
                return false;
        }
        if(unreached_leaf)
        {
            unreached_leaf = false;
        }
        else 
        if(last_value >= node->val)
            return false;
        last_value = node->val;

        if(node->right) {
            if(dfs_r(node->right, last_value, unreached_leaf) == false)
                return false;
        }

        return true;
    }
};