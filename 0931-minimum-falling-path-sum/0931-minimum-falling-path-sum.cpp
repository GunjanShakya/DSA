class Solution {
public:
     int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        for (int i = m - 2; i >= 0; i--) 
            for (int j = 0; j < n; j++) 
                matrix[i][j] += min(min(getVal(matrix, i + 1, j - 1), getVal(matrix, i + 1, j)), getVal(matrix, i + 1, j + 1));
        int res = INT_MAX;
        for (int i = 0; i < n; i++) res = min(res, matrix[0][i]);
        return res;
    }

    int getVal(vector<vector<int>>& matrix, int i, int j) {
        if (i < 0 || j < 0 || i >= matrix.size() || j >= matrix[0].size()) return INT_MAX;
        return matrix[i][j];
    }
};