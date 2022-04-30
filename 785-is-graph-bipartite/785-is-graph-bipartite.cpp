class Solution {
public:
    bool dfs(vector<int> &vis, int node,vector<vector<int>> &graph)
    {
       
        for(auto it:graph[node])
        {   if(vis[it]==-1)
        {vis[it]=1-vis[node];
            if(!dfs(vis,it,graph)) return false; }
         else if(vis[it]==vis[node]) return false;
        } return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> vis(graph.size(),-1);
        
        for(int i=0;i<graph.size();i++)
        {
            if(vis[i]==-1)
            {  vis[i]=1;
              if(!dfs(vis, i,graph)) return false; }
        } 
       
        return true;
       
    }
};