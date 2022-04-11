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
public: int flag=1;
    int bal(TreeNode* root)
    {
        if(!root) return 0;
        int l=bal(root->left);
        int r=bal(root->right);
        if(abs(l-r)>1) flag=0;
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        bal(root);
        return flag;
    }
};