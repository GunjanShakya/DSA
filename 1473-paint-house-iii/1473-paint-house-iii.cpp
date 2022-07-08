class Solution {
public:
    int dp[101][21][101];
    int solve(int idx, int last, int t, vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target){
        if(t > target) return INT_MAX/2; 
        if(idx == m){ 
            if(t == target) return 0; 
            else return INT_MAX/2;
        }
        if(dp[idx][last][t] != -1) return dp[idx][last][t];
        int ans = INT_MAX/2;
        if(houses[idx] == 0){ 
            for(int j=0; j<n; j++){
                ans = min(ans, cost[idx][j] + solve(idx+1, j+1, last == j+1?t:t+1, houses, cost,m,n,target));
            }
        }
        else{ 
            ans = min(ans, solve(idx+1, houses[idx], last == houses[idx]?t: t+1, houses, cost, m, n, target));
        }
        return dp[idx][last][t] = ans;
    }
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        memset(dp, -1, sizeof(dp));
        int ans = solve(0,0,0,houses,cost,m,n,target);
        if(ans == INT_MAX/2) return -1;
        return ans;
    }
};