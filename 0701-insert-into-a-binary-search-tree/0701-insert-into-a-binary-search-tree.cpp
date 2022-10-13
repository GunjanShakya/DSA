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
    TreeNode* insertIntoBST(TreeNode* root, int key) {
     if(root==NULL){
    TreeNode* N=new TreeNode(key);
    return N;
        }
    if(key<root->val) root->left=insertIntoBST(root->left,key);
    if(key>root->val) root->right=insertIntoBST(root->right,key);
    return root;   
    }
};