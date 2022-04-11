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
public: //int sum1=0;
//     void sum(TreeNode* root,vector<int> &v)
// { 
//     if(root)
//     { 
      
//          sum(root->left,v);
//         if(!root->right and !root->left)
//         {v.push_back(root->val); }
//       sum(root->right,v);  }
//       //   return sum1;
//     } else 
//         return;
// } 
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        //  vector<int> v;
        // sum(root,v);
        // int x=0;
        // for(int i=0;i<v.size();i++)
        //     cout<<v[i]<<" ";//x=x+v[i];
        // return x;
        if(!root)
            return 0;
        if(root->left and !root->left->left and !root->left->right)
            sum+=root->left->val;
        if(root->left) sum+=sumOfLeftLeaves(root->left);
        if(root->right) sum+=sumOfLeftLeaves(root->right);
        return sum;
    }
};