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
    bool isUnivalTree_r(TreeNode* root, int unival) {
        if(!root)
            return true;
        if(root->val != unival)
            return false;
        if(!isUnivalTree_r(root->left, unival))
            return false;
        if(!isUnivalTree_r(root->right, unival))
            return false;
        return true;
    }
    bool isUnivalTree(TreeNode* root) {
        if(!root)
            return true;
        return isUnivalTree_r(root, root->val);
    }
};