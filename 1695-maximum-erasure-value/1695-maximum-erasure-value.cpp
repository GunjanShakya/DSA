class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int sum = 0, ans = 0;
        for(int left = 0, right = 0; right<nums.size(); right++){
            while(mpp.find(nums[right]) != mpp.end()){
                mpp.erase(nums[left]);
                sum -= nums[left];
                left++;
            }
            
            mpp[nums[right]] = right;
			//inc size from right
            sum += nums[right];
            ans = max(ans, sum);
        }
        return ans;
    }
};