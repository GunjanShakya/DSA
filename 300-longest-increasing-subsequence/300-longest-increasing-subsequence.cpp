class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()==1) return 1;
       int n=nums.size(); int t[n];  t[0]=1;int o=0;
        for(int i=1;i<n;i++)
        {
            int maxi=0;
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    if(t[j]>maxi)
                        maxi=t[j];
                }
            } t[i]=maxi+1; 
            if(t[i]>o)
                o=t[i];
        } return o;  
    }
};