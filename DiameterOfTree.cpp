class Solution {
  public:
    int solve(Node* root,int &res)
    {
        if(!root) return 0;
        int l=solve(root->left,res);
        int r=solve(root->right,res);
        int temp=1+max(l,r);
        int ans=max(temp,1+l+r);
        res=max(ans,res);
        return temp;
    }
    int diameter(Node* root)
  {
      int res=INT_MIN;
      solve(root,res);
      return res;
  }
    

};
