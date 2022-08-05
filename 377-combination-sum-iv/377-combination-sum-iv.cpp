class Solution {
public:
    int no(vector<int> &nums, int target, int size, vector<int> &dp)
    {
        if(target < 0) return 0; 
        if(target == 0) return 1;
        if(dp[target] != -1) return dp[target]; 
        int w = 0;  
        for(int i = 0; i<size; i++)
            w += no(nums, target - nums[i], size, dp);
        dp[target] = w;          
        return w;
    }
    int combinationSum4(vector<int>& nums, int target) {
        
        vector<int> dp (target+1, -1); 
        return no(nums, target, nums.size(), dp);
    }
};
