class Solution {
    
    int lastSum;
public:
    
    Solution()
    {
        lastSum = 0;
    }
    
    void helper(TreeNode * ptr)
    {
        if(ptr==NULL)
            return;
        
		//main logic starts
		
        helper(ptr->right);
        ptr->val = ptr->val + lastSum;
        lastSum = ptr->val;
        helper(ptr->left);
		
		//main logic ends
        
    }
    
    TreeNode* convertBST(TreeNode* root) {
        helper(root);
        
        return root;
    }
};
