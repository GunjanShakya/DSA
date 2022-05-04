class Solution {
public:
    void dfs(vector<int> &vis,vector<int> adj[],int i)
    { vis[i]=1;
     for(auto it:adj[i])
    {if(!vis[it])
       {
           vis[it]=1;
           dfs(vis,adj,it);
       } }
     
    }
    bool validPath(int n, vector<vector<int>>& edges, int src, int dest) {
         int ctr=0;
       vector<int> adj[n];
        for(int i=0;i<edges.size();i++){
              adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> vis(n,0);
        
            if(!vis[src])
            {  // ctr++;   
                dfs(vis,adj,src); 
            }
        //   if(ctr==1)return true;
        // return false;
        return vis[dest];
    }
};