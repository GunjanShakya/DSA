class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector< pair<int,int>> v;
        int r=mat.size(), c=mat[0].size(), count=0;
        for(int i=0;i<r;i++) { 
            for(int j=0;j<c;j++) if(mat[i][j]==1) count++;
            v.push_back({count,i}); 
            count=0;
        }
        sort(v.begin(), v.end());
        vector<int> vc;
        for(int i=0;i<k;i++) {
            vc.push_back(v[i].second);
        }
        return vc;
    }
};