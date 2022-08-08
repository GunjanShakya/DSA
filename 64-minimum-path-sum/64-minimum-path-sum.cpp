class Solution {
public:
   /*          RECURSIVE -- TLE
   int f(int n,int m,vector<vector<int>>& grid)
    {
        if(n<0 or m<0)
            return 100000;
        if(n==0 and m==0)
            return grid[0][0];
    
      int up=grid[n][m]+  f(n-1,m,grid);
        int left=grid[n][m]+f(n,m-1,grid);
        return min(up,left);
    }*/
     int f(int n,int m,vector<vector<int>>& grid, vector<vector<int>>& t)
     {
         if(n==0 and m==0) return grid[n][m];
          if(t[n][m]!=-1) return t[n][m];
         int up=INT_MAX,left=INT_MAX;
       if(n>0)   up=grid[n][m]+f(n-1,m,grid,t);
        if(m>0)  left=grid[n][m]+f(n,m-1,grid,t);
         return t[n][m]=min(up,left);
             
     }
    int minPathSum(vector<vector<int>>& grid) {
     int m=grid.size()-1,n=grid[0].size()-1;
     vector<vector<int>>t(m+1,vector<int>(n+1,-1));
        return f(m,n,grid,t);
    }
};