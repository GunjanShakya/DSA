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
    int fn(TreeNode* root, int &ans)
    {
        if(root==NULL) return 0;
        int lh=max(0,fn(root->left,ans));
        int rh=max(0,fn(root->right,ans));
        ans=max(ans,lh+rh+root->val);
        return root->val+max(lh,rh);
    }
    int maxPathSum(TreeNode* root) {
     int ans=INT_MIN;
        if(root->left==NULL and root->right==NULL)
            return root->val;
        fn(root,ans);
        return ans;
    }
};