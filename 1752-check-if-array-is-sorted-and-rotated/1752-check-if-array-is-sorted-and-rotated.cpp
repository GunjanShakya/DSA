class Solution {
public:
    bool check(vector<int>& nums) {
       int ctr=0;
        for(int i=0;i<nums.size()-1;i++)
            if(nums[i+1]<nums[i]) ctr++;
        if(nums[0]<nums[nums.size()-1]) ctr++;
        return ctr<=1;
    }
};