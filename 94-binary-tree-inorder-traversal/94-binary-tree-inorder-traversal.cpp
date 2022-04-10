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
    void solve(stack<int> &s,TreeNode *root)
    {
        if(root==NULL)
            return;
        else {
            solve(s,root->left);
            s.push(root->val);
            solve(s,root->right);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        stack<int> s; vector<int> v;
        solve(s,root);
        while(s.size())
        {
            v.push_back(s.top());
            s.pop();
        } reverse(v.begin(),v.end());
        return v;
    }
};