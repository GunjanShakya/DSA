class Solution {
public:
    int missingNumber(vector<int>& nums) { 
    //     int i;
    //     sort(nums.begin(),nums.end());
    //     for( i=0;i<nums.size();i++)
    //     {
    //         if(nums[i]!=i)
    //             break;
    //     } return i;
        int n=nums.size();
        int s=n*(n+1)/2; int sum=0;
        for(int i=0;i<n;i++)
            sum+=nums[i];
        return s-sum;
    }
};