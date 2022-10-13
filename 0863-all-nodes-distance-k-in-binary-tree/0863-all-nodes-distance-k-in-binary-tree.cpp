/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    void parent(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &par)
    {
      if(root==NULL) return;
        if(root->left) par[root->left]=root;
        if(root->right) par[root->right]=root;
        parent(root->left,par);
        parent(root->right,par);
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
     unordered_map<TreeNode*, TreeNode*> par;
        unordered_map<TreeNode*, bool> vis;
        parent(root,par);
        queue<TreeNode*> q;
        q.push(target);
        vis[target]=true;
        while(!q.empty())
        {
            int size=q.size();
            if(k--==0) break;
            while(size--)
            {
                TreeNode* cur=q.front();
                q.pop();
                if(cur->left and !vis[cur->left])
                {
                    q.push(cur->left);
                    vis[cur->left]=true;
                }
                if(cur->right and !vis[cur->right])
                {
                    q.push(cur->right);
                    vis[cur->right]=true;
                }
                if(par[cur] and !vis[par[cur]])
                {
                    q.push(par[cur]);
                    vis[par[cur]]=true;
                }
            }
        }
     vector<int> ans;
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            ans.push_back(temp->val);
        }
        return ans;
    }
};