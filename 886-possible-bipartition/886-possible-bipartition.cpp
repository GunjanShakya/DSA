class Solution {
public:
    bool dfs(vector<int> &vis, int node,vector<int> graph[])
    {
       
        for(auto it:graph[node])
        {   if(vis[it]==-1)
        {vis[it]=1-vis[node];
            if(!dfs(vis,it,graph)) return false; }
         else if(vis[it]==vis[node]) return false;
        } return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
       vector<int> vis(n+1,-1);  vector<int> adj[n+1];
         for(int i=0; i<dislikes.size(); i++)
    {
        adj[dislikes[i][0]].push_back(dislikes[i][1]);
        adj[dislikes[i][1]].push_back(dislikes[i][0]);
    }
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==-1)
            {  vis[i]=1;
              if(!dfs(vis, i,adj)) return false; }
        } 
       
        return true;
    }
};