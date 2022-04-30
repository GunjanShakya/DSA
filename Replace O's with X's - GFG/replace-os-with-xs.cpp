// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
void dfs(int n,int m, vector<vector<char>> &mat)
{
    if(n<0 or m<0 or n>=mat.size() or m>=mat[0].size() or mat[n][m]!='O')
    return;
    mat[n][m]='R';
    dfs(n+1,m,mat);
    dfs(n-1,m,mat);
    dfs(n,m+1,mat);
    dfs(n,m-1,mat);
}
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    { 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 or j==0 or i==n-1 or j==m-1 and mat[i][j]=='O')
                dfs(i,j,mat);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            { if(mat[i][j]=='O')
                mat[i][j]='X';
                else if(mat[i][j]=='R')
                mat[i][j]='O';
                
            }
        }
        return mat;
        // code here
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}  // } Driver Code Ends