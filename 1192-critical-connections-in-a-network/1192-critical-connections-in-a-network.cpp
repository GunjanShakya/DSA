class Solution {
public:
    vector <int> vis,low,tin;
    vector <vector<int>>ans;
    int t=0;
    void dfs(int i,int par,vector <int> adj[]){
        vis[i]=1;
        tin[i]=low[i]=t++;
        for(auto it:adj[i]){
            if(it==par)continue;
            
            if(!vis[it]){
                dfs(it,i,adj);
                low[i]=min(low[i],low[it]);
                if(low[it]>tin[i])ans.push_back({it,i});
                
            }else{
                low[i]=min(low[i],tin[it]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& edge) {
        vector <int> adj[n];
        vis.resize(n,0);
        low.resize(n,-1);
        tin.resize(n,-1);
        for(auto e:edge){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,-1,adj);
            }
        }
        return ans;

    }
};