class Solution {
public:
   /*          RECURSIVE -- TLE
   int f(int n,int m,vector<vector<int>>& grid)
    {
        if(n<0 or m<0)
            return 1e9;
        if(n==0 and m==0)
            return grid[0][0];
    
      int up=grid[n][m]+  f(n-1,m,grid);
        int left=grid[n][m]+f(n,m-1,grid);
        return min(up,left);
    }
*********************************************************************************************
              MEMOIZED SOLUTION -- ACCEPTED
    
    int f(int n,int m,vector<vector<int>>& grid, vector<vector<int>>& t)
     {
         if(n==0 and m==0) return grid[n][m];
          if(t[n][m]!=-1) return t[n][m];  //memoization
         int up=INT_MAX,left=INT_MAX;
       if(n>0)   up=grid[n][m]+f(n-1,m,grid,t);
        if(m>0)  left=grid[n][m]+f(n,m-1,grid,t);
         return t[n][m]=min(up,left);
             
     } */
    
    
    int minPathSum(vector<vector<int>>& grid) {
     int m=grid.size(),n=grid[0].size();
     vector<vector<int>>t(m+1,vector<int>(n+1,0));
        //return f(m,n,grid,t);
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 and j==0)
                    t[i][j]=grid[i][j];
                else
                {
                    int up=1e9,left=1e9;
                    if(i>0 )up=grid[i][j]+t[i-1][j];
                    if(j>0) left=grid[i][j]+t[i][j-1];
                    t[i][j]=min(up,left);
                }
            }
        } return t[m-1][n-1];
    }
};