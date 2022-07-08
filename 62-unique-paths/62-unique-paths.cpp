class Solution {
public:
    int ctr(int m,int n)
    {
        int t[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 || j==0)
                    t[i][j]=1;
                else t[i][j]=t[i-1][j]+t[i][j-1];
            }
        } return t[m-1][n-1];
    }
    int uniquePaths(int m, int n) {
        return ctr(m,n);
    }
};