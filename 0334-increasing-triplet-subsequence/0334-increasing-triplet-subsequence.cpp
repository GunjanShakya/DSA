class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3)
            return false;
        
        int left=INT_MAX, mid=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(left>=nums[i])
                left=nums[i];
            else if(mid>=nums[i])
                mid=nums[i];
            else 
                return true;
        }

        return false;
    }
};