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
    void inorder(TreeNode* root,vector<int> &v)
    { if(!root) return;
        
        else {
            if(!root->left and !root->right)
        {v.push_back(root->val);} 
            inorder(root->left,v);
            //v.push_back(root->val);
            inorder(root->right,v);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
      vector<int> v1,v2,p1,p2;
        inorder(root1,v1);
        inorder(root2,v2);
        // for(int i=0;i<v1.size();i+=2)
        //     p1.push_back(v1[i]);
        // for(int i=0;i<v2.size();i+=2)
        //     p2.push_back(v2[i]);
        if(v1==v2)
            return true;
        return false;
    }
};