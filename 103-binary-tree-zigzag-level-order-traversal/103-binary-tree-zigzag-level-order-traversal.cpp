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
public:  //If level is odd then print in reverse order
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     vector<vector<int>> ans; queue<TreeNode*> q; int i=0;
        if(root==NULL)
            return ans;
        q.push(root);
         while(1)
         { vector<int> data;
             int size=q.size();
             if(size==0)
                 return ans;
             while(size--)
             { TreeNode* t=q.front();
              q.pop();
              data.push_back(t->val);
                 if(t->left) q.push(t->left);
                 if(t->right) q.push(t->right);
             } if(i%2==0)
                 ans.push_back(data);
          else {
              reverse(data.begin(),data.end());
              ans.push_back(data);
          } i++;
         } return ans;
    }
};