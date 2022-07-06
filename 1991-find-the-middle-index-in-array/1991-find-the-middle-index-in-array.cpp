class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
         int s=0,ls=0;
        for(int i=0;i<nums.size();i++)
            s+=nums[i];
        for(int i=0;i<nums.size();i++)
        {
            if(s-ls-nums[i]==ls)
                return i;
            else ls+=nums[i];
        }
        return -1;
    }
};