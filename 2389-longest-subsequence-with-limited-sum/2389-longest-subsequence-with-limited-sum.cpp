class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
      vector<int> ans ; 
        sort(nums.begin(), nums.end()); 
        for(int i = 1; i<nums.size(); i++)
            nums[i] += nums[i-1]; 
        for(auto it: q)
            ans.push_back(upper_bound(nums.begin(), nums.end(), it) - nums.begin());         
        return ans;  
    }
};