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
public: //Space Optimized
    bool sym(TreeNode* l, TreeNode* r)
    {
        if(l==NULL or r==NULL) return l==r;
        if(l->val!=r->val) return false;
        return(sym(l->left,r->right) && sym(l->right,r->left));
    }
    bool isSymmetric(TreeNode* root) {
     return root==NULL||sym(root->left,root->right);
    }
    
    /*
    void pre1(TreeNode * root,vector<int> &v)
    {
        if(root)
        {
            pre1(root->left,v);
            v.push_back(root->val);
            pre1(root->right,v);
        }
        else v.push_back(0);
    }
    void pre2(TreeNode* root,vector<int> &v)
    {
        if(root)
        {
            pre2(root->right,v);
            v.push_back(root->val);
            pre2(root->left,v);
        }
        else v.push_back(0);
    }
    bool isSymmetric(TreeNode* root) {
      vector<int> v1,v2;
        pre1(root,v1);
        pre2(root,v2);
        if(v1==v2)
            return true; 
        return false;
    } */
};