class Solution {
public:
    bool dfs(int i,int j,int mid,int n,int m,vector<vector<int>>& heights,int v[100][100])
    {
        if(i==n-1 and j==m-1) return true;
        v[i][j] = 1;
        bool flag=false;
        if(i>0 && v[i-1][j]==0 and abs(heights[i][j]-heights[i-1][j])<=mid)
        {
            flag = flag || dfs(i-1,j,mid,n,m,heights,v);
        }
        if(j>0 && v[i][j-1]==0 and abs(heights[i][j]-heights[i][j-1])<=mid)
        {
            flag = flag || dfs(i,j-1,mid,n,m,heights,v);
        }
        if(i<n-1 && v[i+1][j]==0 and abs(heights[i][j]-heights[i+1][j])<=mid)
        {
            flag = flag || dfs(i+1,j,mid,n,m,heights,v);
        }
        if(j<m-1 && v[i][j+1]==0 and abs(heights[i][j]-heights[i][j+1])<=mid)
        {
            flag = flag || dfs(i,j+1,mid,n,m,heights,v);
        }
        return flag;
    }
    int minimumEffortPath(vector<vector<int>>& heights) {
        int s=0,e=INT_MAX,ans=INT_MAX;
        int n=heights.size(),m=heights[0].size();
        while(s<=e)
        {
            int mid = s+(e-s)/2;
            int v[100][100];
            memset(v,0,sizeof(v));
            if(dfs(0,0,mid,n,m,heights,v))
            {
                ans = min(ans,mid);
                e = mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return ans;
    }
};