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
    void swap(TreeNode * trv){
        TreeNode* n = trv->left;
        trv->left=trv->right;
        trv->right=n;
        

    }
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* trv;
        if (!root) return nullptr;
        stack <TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            trv = st.top();
            st.pop();
            swap(trv);
            if(trv->left){
                st.push(trv->left);
            }
            if(trv->right){
                st.push(trv->right);
            }
            

        }
        return root;
    }
};
