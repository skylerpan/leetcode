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
    int rangeSumBST(TreeNode* root, int L, int R) {
        ans = 0;
        rangeSumBST_r(root, L, R);
        return ans;
    }
    void rangeSumBST_r(TreeNode* root, int L, int R) {
        
        if(root == NULL)
            return;

        if(root->val >= L && 
           root->val <= R)
            ans += root->val;

        if(root->val > L)    
            rangeSumBST_r(root->left,  L, R);

        if(root->val < R)
            rangeSumBST_r(root->right, L, R);

        return;
    }
private:
    int ans;
};