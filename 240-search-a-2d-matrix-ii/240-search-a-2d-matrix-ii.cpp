class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int n=matrix.size(),m=matrix[0].size();
        int j=m-1,i=0;
        while(j>=0 and i<n)
        {
            if(matrix[i][j]<target)
                i++; 
         else if(matrix[i][j]>target)
                j--;
            else if(matrix[i][j]==target)
            return true;    
        } return false;
    }
};