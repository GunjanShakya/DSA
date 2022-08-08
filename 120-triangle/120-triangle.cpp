class Solution {
public:
    int dp[201][201];
    int f(vector<vector<int>> &t,int i, int j, int n)
    {
        if(i==n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
         int d=t[i][j]+f(t,i+1,j,n);
        int dg=t[i][j]+f(t,i+1,j+1,n); 
        return dp[i][j]=min(d,dg);
        
        
    }
    int minimumTotal(vector<vector<int>>& t) {
    int n=t.size(),m=t[0].size();
        memset(dp,-1,sizeof(dp));
        return f(t,0,0,n);
    }
};