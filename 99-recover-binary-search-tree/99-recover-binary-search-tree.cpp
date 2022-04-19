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
    void helper(TreeNode* root,vector<TreeNode*>&temp){
        if(root==NULL){
            return;
        }
        helper(root->left,temp);
        temp.push_back(root);
        helper(root->right,temp);
    }
    void recoverTree(TreeNode* root) {
        vector<TreeNode*>temp;
        helper(root,temp);
        TreeNode*node1;
        TreeNode*node2;
        for(int i=0;i<temp.size()-1;i++){
            if(temp[i]->val>temp[i+1]->val){
                node1=temp[i];
                break;
            }
        }
        
        for(int i=temp.size()-1;i>0;i--){
            if(temp[i]->val<temp[i-1]->val){
                node2=temp[i];
                break;
            }
        }
        
        int x=node1->val;
        node1->val=node2->val;
        node2->val=x;
    }
};