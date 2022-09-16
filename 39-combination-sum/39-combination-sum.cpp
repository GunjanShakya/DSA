class Solution {
public:
    void solve( vector<vector<int>> &ans, vector<int> v, vector<int> &nums,int t,int i)
    {
        if(i==nums.size() ) {
           if(t==0) ans.push_back(v);
            return;
        }
        else 
        {
           
                if(nums[i]<=t)
                { v.push_back(nums[i]);
                solve(ans,v,nums,t-nums[i],i);
                v.pop_back();    
            } solve(ans,v,nums,t,i+1);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int t) {
      vector<vector<int>> ans;
        vector<int> v;
        solve(ans,v,nums,t,0);
        return ans;
    }
};