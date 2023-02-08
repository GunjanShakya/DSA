class Solution {
public:
    int jump(vector<int>& nums) {
        int curr=0,far=0,jumps=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            far=max(far,nums[i]+i);
            if(curr==i)
            {
                curr=far;
                jumps++;
            }
        } return jumps;
    }
};