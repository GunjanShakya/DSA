class Solution {
public:
    void setZeroes(vector<vector<int>>& mx) {
        int m=mx.size(),n=mx[0].size(); vector<pair<int,int>> v;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mx[i][j]==0)
                    v.push_back({i,j});
            }
        }
        //int sz=v.size();
      for(int i = 0; i < v.size(); i++){
            for(int j = 0; j < n; j++)
                mx[v[i].first][j] = 0;
            for(int j = 0; j < m; j++)
                mx[j][v[i].second] = 0;
        }
    }
};