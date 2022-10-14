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
    void inorder(TreeNode* root, int &ctr,int &ans,int k)
    {
        if(root==NULL) return;
        inorder(root->left,ctr,ans,k);
        if(++ctr==k) {
            ans=root->val;
            return;
        }        inorder(root->right,ctr,ans,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ctr=0; int ans=-1;
         inorder(root,ctr,ans,k);
        return ans;
    }
};