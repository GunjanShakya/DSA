class Solution {
public: 
string shortestCommonSupersequence(string x, string y)
    {
        int m=y.size(); int n=x.size();
        int t[n+1][m+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0 || j==0)
                    t[i][j]=0;
                else if(x[i-1]==y[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        } string ss;
        int i=n,j=m;
        while(i>0 && j>0)
        {
            if(x[i-1]==y[j-1])
            {
               ss.push_back(x[i-1]);
                i--; j--;
            } 
            else {
                if(t[i][j-1]>t[i-1][j])
                { ss.push_back(y[j-1]);
                    j--; } 
                else { ss.push_back(x[i-1]);i--; 
                     } 
            }
        } while(i > 0){
            ss.push_back(x[i-1]);
            i--;
        }
        while(j > 0){
            ss.push_back(y[j-1]);
            j--;
        }
        reverse(ss.begin() , ss.end());
        
        return ss;
        
    }

};