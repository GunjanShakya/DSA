class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) { int ctr=0,x=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=1)
                ctr=0;
            
            else 
                ctr++;
             x=max(x,ctr);
        } return x;
    }
};