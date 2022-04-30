class Solution {
private:
    void dfs(int m,int n, vector<vector<char>>& b )
    {
        if((m<0 or m>=b.size() or n<0  or n>=b[0].size()) or b[m][n]!='O') return;
        b[m][n]='R';
        dfs(m+1,n,b);
        dfs(m-1,n,b);
        dfs(m,n+1,b);
        dfs(m,n-1,b);
    }
    public:
    void solve(vector<vector<char>>& b) {
        int m=b.size(),n=b[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i==0 or i==m-1 or j==0 or j==n-1) and b[i][j]=='O')
                    dfs(i,j,b);
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(b[i][j]=='O') 
                    b[i][j]='X';
                else if(b[i][j]=='R') 
                    b[i][j]='O';
            }
        }
    }
};