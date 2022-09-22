class Solution {
public:
    int change(int amount, vector<int>& coins) {
       int n=coins.size(); int w=amount;
        int t[n+1][w+1]; 
        for(int i=0;i<amount+1;i++) t[0][i]=0;
        for(int i=0;i<n+1;i++) t[i][0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=w;j++)
            { 
                if(i==0) t[i][j]=0; if(j==0) t[i][j]=1;
                if(coins[i-1]<=j)
                    t[i][j]=t[i][j-coins[i-1]]+t[i-1][j];
             else  t[i][j]=t[i-1][j];
            }
        } return t[n][w];
    }
};