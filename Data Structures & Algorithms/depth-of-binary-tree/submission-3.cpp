/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int dfs(TreeNode* trv){
        if (!trv) return 0;
        int ll=dfs(trv->left);
        int rl=dfs(trv->right);
        return 1+ max(ll,rl);
    }
    int maxDepth(TreeNode* root) {
        return dfs(root);
        
    }
};
