class Solution {
public:
    int maxDepth(TreeNode* root) {
       int  lh,rh;
        if(root==NULL)
            return 0;
        lh=maxDepth(root->left);
        rh=maxDepth(root->right);
        return 1+max(lh,rh);
    }
};
