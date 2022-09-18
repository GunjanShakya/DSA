class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int j=0,ans=0,num=0;
        for(int i=0;i<nums.size();i++)
        {
            while((nums[i] & num) !=0)
            {
         num=num^nums[j]; // performing xor in order to remove the number and move the window
                j++;
            } num=num | nums[i]; //Setting bits
            ans=max(ans,i-j+1);
        } return ans;
    }
};