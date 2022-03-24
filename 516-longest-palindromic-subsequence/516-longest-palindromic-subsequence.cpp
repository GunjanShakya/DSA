class Solution {
public:
    int longestCommonSub(string x,string y,int n,int m)
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
 
    int longestPalindromeSubseq(string s) {
        string str=s;reverse(s.begin(),s.end());
        string s2=s; cout<<s2<<endl;
        int b=s.size();
        int a=longestCommonSub(str,s2,b,b);
        return a;
    }
};