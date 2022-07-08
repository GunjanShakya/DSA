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

/******************************************************************************************

TLE - RECURSIVE SOLUTION

int p(int sr,int sc,int dr,int dc)
    {  
        
         if(sr==dr and sc==dc)
            return 1;
        if(sr>dr or sc>dc)
            return 0;
    else  return  p(sr+1,sc,dr,dc)
      +  p(sr,sc+1,dr,dc);
       // return ans;
    }
    int uniquePaths(int m, int n) {
       int x=p(0,0,m-1,n-1);
        return x;
    }
*********************************************************************************************/