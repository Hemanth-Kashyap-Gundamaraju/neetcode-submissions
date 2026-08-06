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
    int maxd=0;
    int dfs(TreeNode* trv){
        if(!trv) return 0;
        int ll = dfs(trv->left);
        int rl = dfs(trv->right);
        maxd=max(ll+rl,maxd);
        return 1+max(ll,rl);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return maxd;
    }
};
