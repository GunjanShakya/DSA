class Solution {
public:
    void dfs(int i,int j,int m,int n,vector<vector<int>>& g)
    {
        if(i<0 or j<0 or i>=m or j>=n or g[i][j]!=0)
            return;
        g[i][j]=5;
         dfs(i+1,j,m,n,g);
        dfs(i-1,j,m,n,g);
        dfs(i,j+1,m,n,g);
        dfs(i,j-1,m,n,g);
    }
    int closedIsland(vector<vector<int>>& g) {
       int m=g.size(),n=g[0].size(); int ctr=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if( i==0 or j==0 or i==m-1 or j==n-1 and g[i][j]==0)
                {
                    //ctr+=1;
                    dfs(i,j,m,n,g);

                }
            } }
            
            for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(  g[i][j]==0)
                {
                    ctr+=1;
                    dfs(i,j,m,n,g);

                }
            }
        } return ctr;
    }
};