class Solution {
public:
    bool cyclic(int s, vector<bool>&visited, vector<bool>&currVisited, vector<int>adj[]){
        visited[s] = true;
        currVisited[s] = true;
        
        vector<int>data = adj[s];
        for(auto x: data){
            if(!visited[x]){
                if(cyclic(x, visited, currVisited, adj)){
                    return true;
                }
            }
            else if(visited[x] && currVisited[x]){
                return true;
            }
        }
        
        currVisited[s] = false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<int> adj[n];
        
        for(auto it:prerequisites)
        {
            vector<int> v=it;
            int x=v[0];
            int y=v[1];
            adj[x].push_back(y);
        }
        vector<bool> vis(n,false),dfsvis(n,false);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                if(cyclic(i,vis,dfsvis,adj))
                    return false;
            }
        } return true;
    }
};