// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
bool is( vector<int>adj[], vector<int> &vis,int s)
{
    if(vis[s]==-1)
    vis[s]=1;
    for(auto it:adj[s])
    {
        if(vis[it]==-1)
        { vis[it]=1-vis[s];
            if(!is(adj,vis,it))
            return false;
        } else if(vis[it]==vis[s]) return false;
    } return true;
}
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> vis(V,-1);
	    for(int i=0;i<V;i++)
	    {
	        if(vis[i]==-1)
	        { 
	            if(!is(adj,vis,i)) return false;
	        }
	    } return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends