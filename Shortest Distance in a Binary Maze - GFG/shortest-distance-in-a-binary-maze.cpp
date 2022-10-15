//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        // code here
        int X=destination.first,Y=destination.second; int a=source.first,b=source.second;
        if(source.first==destination.first && source.second==destination.second) 
          return 0;
        if(grid[a][b]==0 or grid[X][Y]==0) return -1;
        int m=grid.size(); int n=grid[0].size();
        int dx[4]={-1, 0, 1, 0};
        int dy[4]={0, 1, 0, -1};
        queue<pair<int,int>> q;
        q.push({a,b});
        grid[a][b]=0;
        int ans=0;
        while(!q.empty())
        {
            int size=q.size();
            while(size--)
            {      
                int i=q.front().first;
                int j=q.front().second;
                q.pop();
                if(i==destination.first and j==destination.second) return ans;
                for(int k=0;k<4;k++)
                {
                    int newr=i+dx[k];
                    int newc=j+dy[k];
                    if(newr>=0 and newc>=0 and newr<m and newc<n and grid[newr][newc]==1)
                    {
                        grid[newr][newc]=0;
                        q.push({newr,newc});
                    }
                } 
            }             ans++;
        } return -1;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends