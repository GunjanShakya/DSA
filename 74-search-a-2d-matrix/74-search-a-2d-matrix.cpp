class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int n=matrix.size(); int m=matrix[0].size(); int i;
        for( i=0;i<n;i++)
        {
            if(target==matrix[i][0])
                return true;
            else if(matrix[i][0]>target)
              break;  
        } 
        if(i==0)
            return false;
        for(int j=0;j<m;j++)
            if(matrix[i-1][j]==target)
                return true;
        return false;
/********************************************************************************************
        int n=matrix.size(); int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==target)
                    return true;
            }
        } return false;
**********************************************************************************************/
    }
};