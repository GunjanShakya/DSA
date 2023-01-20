class Solution {
public:
    bool check(vector<int>&nums) {
        for(int i=0;i<nums.size()-1; i++) 
            if(nums[i]>nums[i+1]) return false;
        return true;
    }
    void solve(vector<int>& num, set<vector<int>> &st, int ind, vector<int> ds)
    {  if(ind>=num.size())
    {if(ds.size()>=2 and check(ds))
            st.insert(ds);
    return;
    }
       ds.push_back(num[ind]);
       solve(num, st, ind+1, ds);
       ds.pop_back();
       solve(num, st, ind+1, ds);
        
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> st; vector<int> ds;
        solve(nums,st,0,ds);
             vector<vector<int>>res;
        for(auto it:st) {
            res.push_back(it);
        }
        return res;
    }
};