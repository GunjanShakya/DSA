class Solution {
public:
    int numSquares(int n) {
        
        vector<int> dp(n+1,INT_MAX);
        dp[0]=0;
        int c=1;
        while(c*c <= n) {
        int sq=c*c;
        for(int i=sq; i<n+1; i++) {
            dp[i] = min(dp[i-sq] + 1,dp[i]);
        }
        c++;
    }
    return dp[n];
    }
};