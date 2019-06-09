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
    int diameterOfBinaryTree(TreeNode* root) {
        maxDepth = 1;
        depth_r(root);
        return maxDepth - 1;
    }
    int depth_r(TreeNode* root)
    {
        if (root == NULL) return 0;
        int L = depth_r(root->left);
        int R = depth_r(root->right);
        maxDepth = max(maxDepth, L+R+1);
        return max(L, R) + 1;
    }
private:
    int maxDepth;
};