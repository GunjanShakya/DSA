class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>> adj[n];
        for(auto it:flights)
            adj[it[0]].push_back({it[1],it[2]});
        queue<pair<int,pair<int,int>>> q;
        q.push({0,{src,0}}); // stops, node, dist
        vector<int> dist(n,1e9);
        while(!q.empty())
        {
            int stop=q.front().first;
            int node=q.front().second.first;
            int dis=q.front().second.second;
            q.pop();
            for(auto it:adj[node])
            {
                int adjN=it.first;
                int edge=it.second;
                if(dist[adjN]>edge+dis and stop<=k)
                {
                    dist[adjN]=edge+dis;
                    q.push({stop+1,{adjN,edge+dis}});
                }
            }
        }
         return dist[dst]==1e9?-1:dist[dst];   
    }
};