class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int i = 0;
        for(; i < nums.size() - 1 and nums[i+1] >= nums[i]; i++);
        
        if(i == nums.size() - 1) return true;
        if(i == 0 or nums[i + 1] >= nums[i - 1]){
            int j = i + 1;
            for(; j < nums.size() - 1 and nums[j+1] >= nums[j]; j++);
            if(j == nums.size() - 1)
                return true;
            else
                return false;
        }
        nums[i+1] = nums[i];
        int j = i + 1;
        for(;j < nums.size() - 1 and nums[j + 1] >= nums[j];j++);
        if(j == nums.size() - 1)
            return true;
        else 
			return false;
    }
};