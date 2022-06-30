class Solution {
public:
    int minMoves2(vector<int>& nums) {
          int ans = 0 , n = nums.size();
        
       nth_element(nums.begin(),nums.begin()+n/2,nums.end());       
        int mid = nums[n/2];
        
        for(auto &i:nums){
            ans+=abs(i-mid);       
        }
        
        return ans;  
    }
};