class Solution {
public:
    void solve(int i, vector<int> &nums, vector<int>& temp, vector<vector<int>>& ans)
    {
        if(i==nums.size())
        {ans.push_back(temp); return; }
            
        temp.push_back(nums[i]);
        solve(i+1,nums,temp,ans);
        temp.pop_back();
        solve(i+1,nums,temp,ans);
     }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>> ans;
        vector<int> temp;
        solve(0,nums,temp,ans);
        return ans;
    }
};