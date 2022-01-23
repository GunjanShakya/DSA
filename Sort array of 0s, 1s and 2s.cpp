class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i, n=nums.size();
        int c0=0,c1=0,c2=0;
        for(i=0;i<n;i++)
        {
            if(nums[i]==0) c0++;
            else if(nums[i]==1) c1++;
            else c2++;
        }
        int k=0;
        for(i=0;i<c0;i++) nums[k++]=0;
         for(i=0;i<c1;i++) nums[k++]=1;
         for(i=0;i<c2;i++) nums[k++]=2;
    }
};
