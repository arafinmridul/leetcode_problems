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
    int ans = 0;
    void dfs(TreeNode* &root, int mx = INT_MIN){
        if(root == NULL)
            return;
        
        if(root->val >= mx){
            ++ans;
            mx = root->val;
        }
        dfs(root->left, mx);
        dfs(root->right, mx);        
    }
    int goodNodes(TreeNode* root) {
        dfs(root, root->val);
        return this->ans;
    }
};