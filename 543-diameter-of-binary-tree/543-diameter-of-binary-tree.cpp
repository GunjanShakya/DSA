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
    
         int solve(TreeNode *root,int &d)
{
    if(!root) return 0;
    int l=solve(root->left,d);
    int r=solve(root->right,d);
    d=max(d,l+r);
    return 1+max(l,r);
}
 int diameterOfBinaryTree(TreeNode* root) {
    // code here
    int diameter=0;
    solve(root,diameter);
    return diameter;
}
    
};