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
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>> ans;
        vector<int> data;
        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL)
            return ans;
        while(1)
        { data.clear();
           int sz=q.size();
            if(sz==0) return ans; // break condition
            while(sz>0)
            {   
                TreeNode* node=q.front();
                q.pop();
                data.push_back(node->val);
                if(node->left!=NULL)
                q.push(node->left);
                if(node->right!=NULL)
                    q.push(node->right);
                sz--;
            } 
            ans.push_back(data);
        } return ans;
    }
};