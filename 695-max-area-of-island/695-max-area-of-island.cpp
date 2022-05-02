class Solution {
public:
    int dfs(int r,int c,vector<vector<int>>&grid)
    {
     if(r<0 or c<0 or r>=grid.size() or c>=grid[0].size() or grid[r][c]==0)
         return 0;
         grid[r][c]=0;
         return 1+dfs(r-1,c,grid)+dfs(r+1,c,grid)+ dfs(r,c+1,grid)+dfs(r,c-1,grid);     
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int result=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                {
                    result=max(result,dfs(i,j,grid));
                }
            }
        }
        return result;
    }
};