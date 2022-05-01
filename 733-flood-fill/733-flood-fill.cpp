class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>& g,int col,int nc)
    {
        if(i<0 or j<0 or i>=g.size() or j>=g[0].size() or g[i][j]!=col or g[i][j]==nc) return;
         g[i][j]=nc;
         dfs(i+1,j,g,col,nc);
         dfs(i-1,j,g,col,nc);
         dfs(i,j+1,g,col,nc);
        dfs(i,j-1,g,col,nc);
     
    }
    vector<vector<int>> floodFill(vector<vector<int>>& im, int sr, int sc, int col) {
        int m=im.size(), n=im[0].size(); int x=im[sr][sc];
       
                 //if(i==sr  or j==sc and im[i][j]==x)
                     dfs(sr,sc,im,x,col);
            
    
        // for(int i=0;i<m;i++)
        //  {
        //      for(int j=0;j<n;j++)
        //      { if(im[i][j]==x)
        //          im[i][j]=col;
        //      else if(im[i][j]==5)
        //          im[i][j]=x;}
        // }
         return im;
    }
};

 // void dfs(int i,int j,vector<vector<int>>& g)
 //    {
 //        if(i<0 or j<0 or i>=g.size() or j>=g[0].size() or g[i][j]!=1) return;
 //        g[i][j]=5;
 //        dfs(i+1,j,g);
 //        dfs(i-1,j,g);
 //        dfs(i,j+1,g);
 //        dfs(i,j-1,g);
 //    }
 //    int numEnclaves(vector<vector<int>>& g) {
 //        int m=g.size(), n=g[0].size(); int ctr=0;
 //        for(int i=0;i<m;i++)
 //        {
 //            for(int j=0;j<n;j++)
 //            {
 //                if(i==0 or j==0 or i==m-1 or j==n-1 and g[i][j]==1)
 //                    dfs(i,j,g);
 //            }
 //        }
 //        for(int i=0;i<m;i++)
 //        {
 //            for(int j=0;j<n;j++)
 //            { if(g[i][j]==1)
 //                ctr++; }
 //        }
 //        return ctr;
 //    }