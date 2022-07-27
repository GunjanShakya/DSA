class Solution {
public:
    bool subsetsum(vector<int>nums,int sum){
        int n=nums.size();
        int dp[n+1][sum+1];
      
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)
                    dp[i][j]=0;
                else if(j==0)
                    dp[i][j]=1;
                else if(nums[i-1]<=j)
                        dp[i][j]=dp[i-1][j-nums[i-1]]||dp[i-1][j];
                    else
                        dp[i][j]=dp[i-1][j];
                }
            }
        
        return dp[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0; int n=nums.size();
        for(int i=0;i<n;i++)
        sum=sum+nums[i];
        if(sum%2==0)
            return subsetsum(nums,sum/2);
        else
            return false;
        
    }
};


