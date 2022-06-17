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
    int dfs(TreeNode* root, int &count)
    {
        if(!root) return 1;
        if(!root->left && !root->right) return -1;
        
        int x=dfs(root->left,count);
        int y=dfs(root->right,count);
        
        if(x==-1 || y==-1)
        {
            count++;
            return 2;
        }
        if(x==1 && y==1)
            return -1;
        if(x==2 || y==2)
            return 1;
        return 1;
    }
public:
    int minCameraCover(TreeNode* root) {
        
        int count=0;
        int x=dfs(root,count);
        return (x==2 || x==1)?count:count+1;
    }
};