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
    TreeNode* solve(vector<int>& inorder,int is,int ie, vector<int>& postorder,int ps,int pe, unordered_map<int,int>& mp)
    {
        if(ps>pe or is>ie) return NULL;
        int node=postorder[pe];
        TreeNode* root=new TreeNode(node);
        int inroot=mp[postorder[pe]]; // find where the root lies in inorder traveral
        int numsLeft=inroot-is;
        root->left=solve(inorder,is,inroot-1,postorder,ps,ps+numsLeft-1,mp);
        root->right=solve(inorder,inroot+1,ie,postorder,ps+numsLeft,pe-1,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
      if(inorder.size()!=postorder.size())
          return NULL;
        unordered_map<int,int> mp;
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;
       return solve(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,mp) ;
    }
};