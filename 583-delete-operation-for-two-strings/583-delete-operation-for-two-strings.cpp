class Solution {
public: 
    int lcs(string x,string y,int n,int m)
    { int t[n+1][m+1];
     for(int i=0;i<=n;i++)
     {
         for(int j=0;j<=m;j++)
         { if(i==0 || j==0)
             t[i][j]=0;
            else  if(x[i-1]==y[j-1])
            t[i][j]=1+t[i-1][j-1];
        else t[i][j]=max(t[i-1][j],t[i][j-1]);
         }
     }
        return t[n][m];
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size(); int m=text2.size();
       
        int x=lcs(text1,text2,n,m);
        return x;
    }
    int minDistance(string word1, string word2) {
        int a=word1.size(); int b=word2.size();
        int l=longestCommonSubsequence(word1, word2);
        int x=a-l + b-l;
        return x;
    }
};