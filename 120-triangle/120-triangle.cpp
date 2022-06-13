class Solution {
public:
   int dp[201][201];
int check(vector<vector<int>>&arr, int i, int j){
    if(i==arr.size())return 0;
	
    if(dp[i][j] != -1)return dp[i][j];
	
    int x=arr[i][j] + check(arr,i+1,j);
    int z=arr[i][j] + check(arr,i+1,j+1);
	
    return dp[i][j] = min({x,z});
}
int minimumTotal(vector<vector<int>>& triangle) {
    memset(dp,-1,sizeof(dp));
    return check(triangle,0,0);
}
};