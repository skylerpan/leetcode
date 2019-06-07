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
    TreeNode* invertTree(TreeNode* root) {
        invertTree_r(root);
        return root;
    }
    void invertTree_r(TreeNode* root) {
        TreeNode* tmp;
        if(root == NULL)
            return;
        invertTree_r(root->left);
        invertTree_r(root->right);
        swap(root->left, root->right);
    }
};