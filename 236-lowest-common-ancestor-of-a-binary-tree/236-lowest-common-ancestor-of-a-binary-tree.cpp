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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root or root==p or root==q) return root;
        // if(root==p or root->val==q->val) return root;
       TreeNode* l= lowestCommonAncestor(root->left,p,q);
       TreeNode* r=lowestCommonAncestor(root->right,p,q);
        if(!r) return l;
        else if(!l) return r;
        else return root;
    }
};