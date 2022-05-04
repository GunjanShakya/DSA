class Solution {
public:
    void dfs(int n,vector<int>&vis,vector<vector<int>>&ic,int s)
    {
        vis[n]=1;
        for(int i=0;i<s;i++)
        {
            if(ic[n][i] and !vis[i])
            {
              dfs(i,vis,ic,s);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& ic) {
        vector<int> vis(ic.size(),0); int ctr=0;
        for(int i=0;i<ic.size();i++)
        {
            if(!vis[i])
            {
                ctr++;
                dfs(i,vis,ic,ic.size());
            }
        } return ctr;
        
    }
};