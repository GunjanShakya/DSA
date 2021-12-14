class Solution {
public:
     void solve(vector<int> &v,TreeNode* root)
    {
        if(root==NULL)
            return;
        else {  
            solve(v,root->left);
           
            solve(v,root->right); v.push_back(root->val);
        }
        
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        solve(v,root);
        return v;
        
    }
};
