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
    int pathSum(TreeNode* root, int sum) {
        ans = 0;
        pathSum_r(root, sum);
        return ans;
    }
    void pathSum_r(TreeNode* root, int sum) {
        if(root == NULL)
            return;
        pathCheck_r(root, 0, sum);
        pathSum_r(root->left, sum);
        pathSum_r(root->right, sum);
        return;
    }
    void pathCheck_r(TreeNode* root, int sum, int target) {
        if(root == NULL)
            return;
        if(sum + root->val == target)
            ans++;
        pathCheck_r(root->left, sum + root->val, target);
        pathCheck_r(root->right, sum + root->val, target);
    }
private:
    int ans;
};