class Solution {
public:
    void solve(vector<int> &c, int t, int i,vector<vector<int>> &ans, vector<int> &v )
    {
        if(t==0)
        {
            ans.push_back(v);
            return;
        }
        
            for(int j=i;j<c.size();j++)
            { 
                if(j>i and c[j]==c[j-1] ) continue;
                if(c[j]>t) break;
                v.push_back(c[j]);
             solve(c,t-c[j],j+1,ans,v);
             v.pop_back();    
            }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        sort(c.begin(),c.end());
        vector<vector<int>> ans;
        vector<int> v;
        solve(c,t,0,ans,v);
        return ans;
    }
};