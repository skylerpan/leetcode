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
    vector<vector<int>> levelOrder(TreeNode* root) {
        int i = 0, j = 0;

        ans.clear();
        level_queue.clear();

        addChiledToLevelQueue(0, root);

        while(i < level_queue.size()) {
            for(auto& it : level_queue[i])
            {
                TreeNode* node = it;
                if(node) {
                    if(ans.size() < i+1) {
                        ans.push_back(*(new vector<int>()));
                    }
                    ans[i].push_back(node->val);
                }
                if(node->left)
                    addChiledToLevelQueue(i+1, node->left);
                if(node->right)
                    addChiledToLevelQueue(i+1, node->right);
            }          
            i++;
        }
        return ans;   
    }
private:
    vector<vector<int>> ans;
    vector<vector<TreeNode*>> level_queue;

    void addChiledToLevelQueue(int depth, TreeNode* node)
    {
        if(node == NULL)
            return;
        if(level_queue.size() < depth+1)
            level_queue.push_back(*(new vector<TreeNode*>()));
        level_queue[depth].push_back(node);
    }
};