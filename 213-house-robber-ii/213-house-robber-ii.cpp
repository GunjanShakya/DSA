class Solution {
public:
    int hr(vector<int>& num)
    { int n=num.size();
        int dp[n]; dp[0]=num[0];
        for(int i=1;i<n;i++)
        {
        int pick=num[i]; if(i>1) pick+=dp[i-2];
            int np=dp[i-1];
            dp[i]=max(pick,np);
        } return dp[n-1];
    }
    int rob(vector<int>& nums) {
       vector<int> t1,t2;
        if(nums.size()==1) return nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0) t1.push_back(nums[i]);
            if(i!=nums.size()-1) t2.push_back(nums[i]);
        }
        return max(hr(t1),hr(t2));
        
    }
};