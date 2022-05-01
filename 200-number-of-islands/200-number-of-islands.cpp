class Solution {
public: 
    void dfs(int m,int n,vector<vector<char>>& g)
             {
                 if(m<0 or n<0 or m>=g.size() or n>=g[0].size() or g[m][n]!='1')
                     return;
          g[m][n]='a';
                 dfs(m+1,n,g);
                 dfs(m,n+1,g);
                 dfs(m,n-1,g);
                 dfs(m-1,n,g);
             }
    int numIslands(vector<vector<char>>& g) {
        int m=g.size(); int n=g[0].size(); int cre=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(g[i][j]=='1')
                {cre+=1;dfs(i,j,g);}  
            }
        } return cre;
    }
};