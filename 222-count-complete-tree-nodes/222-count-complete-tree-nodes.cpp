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

// TC-->O((log n))^2;
class Solution {
public:
    int countNodes(TreeNode* root) {
       if(!root) return 0;
        int lh=hl(root);
        int rh=hr(root);
        if(lh==rh) return (1<<lh)-1; //(1<<lh) means 2 to the power lh
        return 1+countNodes(root->left)+countNodes(root->right); 
    }
    int hl(TreeNode* root)
    {
        int l=0;
       // if(!l) return 0;
        while(root)
        {
            l++;
            root=root->left;
        }
        return l;
    }
    int hr(TreeNode* root)
    {
       int l=0;
       // if(!l) return 0;
        while(root)
        {
            l++;
            root=root->right;
        }
        return l; 
    }
};