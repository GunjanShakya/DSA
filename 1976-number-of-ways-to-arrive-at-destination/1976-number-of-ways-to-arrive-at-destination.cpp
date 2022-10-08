class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
         vector<pair<long long,long long>> adj[n];
        for(auto it:roads)
        {
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        vector<long long> dist(n,LONG_MAX),ways(n,0);
        priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>>pq;
        pq.push({0,0}); //dist, node
        dist[0]=0;
        ways[0]=1;
        long long mod=1000000007;
        while(!pq.empty())
        {
            long long node=pq.top().second;
            long long dis=pq.top().first;
            pq.pop();
            for(auto it:adj[node])
            {
                long long adjN=it.first;
                long long edge=it.second;
                if(dist[adjN]>edge+dis)
                {
                    ways[adjN]=ways[node];
                    dist[adjN]=edge+dis;
                    pq.push({edge+dis,adjN});
                }
                else if(dist[adjN]==edge+dis)
                ways[adjN]+=ways[node]%mod;
            }
        } return ways[n-1]%mod;
    }
};