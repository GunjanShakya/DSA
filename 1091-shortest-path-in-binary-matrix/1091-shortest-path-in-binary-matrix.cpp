class Solution {
public:
    bool check(int row,int col,vector<vector<int>>& grid,int rs,int cs)
    {
        if(row>=0 and row<=rs and col>=0 and col<=cs and grid[row][col]==0)
            return true;
         return false;
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) { int ans=0;
        if(grid[0][0]==1)
            return -1;
        int m=grid.size()-1;
        int n=grid[0].size()-1;
        vector<vector<int>> v={{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};
        queue<pair<int,int>> q;
        q.push({0,0});
        grid[0][0]=1;
        while(!q.empty())
        { ans++; int sz=q.size();
         for(int i=0;i<sz;i++)
         {
             pair<int,int> p;
         p=q.front();
         q.pop();
            if(p.first==m and p.second==n)
                return ans;
         for(int j=0;j<v.size();j++)
         {
             int r=p.first+v[j][0];
             int c=p.second+v[j][1];
             if(check(r,c,grid,m,n))
             { q.push({r,c});
                 grid[r][c]=1;
             }
         }
        } }
        return -1;
    }
};