class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1) return -1;
        queue<pair<int,int>> q;
        q.push({0,0});
        grid[0][0]=1;
        int ans=0;
        int n=grid.size(),m=grid[0].size();
        int dx[8]={-1,-1,0,1,1,1,0,-1};
        int dy[8]={0,1,1,1,0,-1,-1,-1};
        while(!q.empty())
        {
            int size=q.size();
            ans++;
            while(size--)
            {      
                int i=q.front().first;
                int j=q.front().second;
                q.pop();
                if(i==n-1 and j==m-1) return ans;
                for(int k=0;k<8;k++)
                {
                    int newr=i+dx[k];
                    int newc=j+dy[k];
                    if(newr>=0 and newc>=0 and newr<n and newc<m and grid[newr][newc]==0)
                    {
                        grid[newr][newc]=1;
                        q.push({newr,newc});
                    }
                }
            }
        } return -1;
    }
};