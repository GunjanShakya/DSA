class Solution {
public:
    int solve(vector<int> &arr, int buy, vector<vector<int>> &dp,int ind,int n)
    {   int profit;
        if(ind==n)
            return 0;
        if(dp[ind][buy]!=-1) return dp[ind][buy];
        if(buy)
            profit=max((-arr[ind]+solve(arr,0,dp,ind+1,n)), 0+solve(arr,1,dp,ind+1,n));
        else
            profit=max((arr[ind]+solve(arr,1,dp,ind+1,n)),0+solve(arr,0,dp,ind+1,n));
       return dp[ind][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return solve(prices,1,dp,0,n);
    }
};