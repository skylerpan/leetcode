#include <math>
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
    int maxDepth(TreeNode* root) {
        max_depth = 0;
        if(root)
            preOrderTraverse_r(root, 1);
        return max_depth;
    }
    void preOrderTraverse_r(TreeNode* node, int depth) {
        if(node == NULL)
            return;
        max_depth = max(max_depth, depth);
        preOrderTraverse_r(node->left,  depth+1);
        preOrderTraverse_r(node->right, depth+1);
    }
private:
    int max_depth;
};