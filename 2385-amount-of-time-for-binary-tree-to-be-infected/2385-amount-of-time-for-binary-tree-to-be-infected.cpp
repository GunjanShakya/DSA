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
    private:
    TreeNode* tar=NULL;
    void parent(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &par,int t)
    {
      if(root==NULL) return;
        if(root->val==t) tar=root;
        if(root->left) par[root->left]=root;
        if(root->right) par[root->right]=root;
        parent(root->left,par,t);
        parent(root->right,par,t);
    }
public:    
    int amountOfTime(TreeNode* root, int target) {
         unordered_map<TreeNode*, TreeNode*> par;
        unordered_map<TreeNode*, bool> vis;
        parent(root,par,target);
        queue<TreeNode*> q;
        q.push(tar);
        vis[tar]=true;
        int k=0;
        while(!q.empty())
        {
            int size=q.size();
            k++;
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
        } return k-1;
    } 
};