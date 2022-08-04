class Solution {
public:
    int rob(vector<int>& nums) {
       // int sum=0,sum1=0;
       //  for(int i=0;i<nums.size();i+=2)
       //      sum+=nums[i];
       //  for(int i=1;i<nums.size();i+=2)
       //      sum1+=nums[i];
       //  return sum>sum1?sum:sum1;
    int n=nums.size();
        int res[n];
        if(n==1)
            return nums[0];
        res[0]=nums[0], res[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++)
            res[i]=max(res[i-1],res[i-2]+nums[i]);
        return res[n-1];
    }
};