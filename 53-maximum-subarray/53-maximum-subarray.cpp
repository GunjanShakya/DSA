class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int csum=nums[0],osum=nums[0]; // current sum and overall sum =0 
         for(int i=1;i<nums.size();i++)
         {
             if(csum>=0)
                 csum+=nums[i];
             else csum=nums[i];
             if(csum>osum)
                 osum=csum;
         }
        return osum;
    }
};