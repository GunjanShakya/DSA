class Solution {
public:
    void solve(vector<int> &v,TreeNode* root)
    {
        if(root==NULL)
            return;
        else {
            v.push_back(root->val);
            solve(v,root->left);
            solve(v,root->right);
        }
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        solve(v,root);
        return v;
        
    }
};
