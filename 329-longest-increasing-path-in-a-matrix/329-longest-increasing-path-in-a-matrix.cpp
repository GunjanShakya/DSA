class Solution {
public:
    int dp[201][201];
    
    int dfs(vector<vector<int>>& matrix, int row, int col, int pre)
    {
        if(row<0 || col<0 || row == matrix.size() || col == matrix[0].size() || pre >= matrix[row][col])
        return 0;
        
        if(dp[row][col])
            return dp[row][col];
        
        int l = dfs(matrix,row,col-1,matrix[row][col]);
        int r = dfs(matrix,row,col+1,matrix[row][col]);
        int u = dfs(matrix,row-1,col,matrix[row][col]);
        int d = dfs(matrix,row+1,col,matrix[row][col]);
        
        return dp[row][col] = max({l,r,u,d}) + 1;
    }
    
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int maxValue = 0;
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                maxValue = max(maxValue, dfs(matrix,i,j,-1));
            }
        }
        return maxValue;
    }
};