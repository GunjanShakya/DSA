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
   void traverse(TreeNode* root , int &k, int &pos, int &ans)
    {
        if(root == NULL)
            return;
        traverse(root -> left, k, pos, ans);
        pos++;
        if(pos == k)
        {
            ans = root -> val;
            return;
        }
        
        traverse(root -> right, k, pos, ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int pos = 0, ans = INT_MAX;
        traverse(root, k, pos, ans);
        return ans;
    }
};