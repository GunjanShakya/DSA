class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size()-1;
        for(int i=0;i<nums.size();i++) // while(mid<=high) would also work
        {
            if(nums[mid]==0) 
            {
                swap(nums[low],nums[mid]);
                low++; mid++;
            }
            else if(nums[mid]==1) mid++;
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
        /* Count number of 0s,1s and 2s TC-> O(2N)
        int c0=0,c1=0,c2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) c0++;
            if(nums[i]==1) c1++;
            if(nums[i]==2) c2++;
        }
        int k=0;
        for(int i=0;i<c0;i++) nums[k++]=0;
        for(int i=0;i<c1;i++) nums[k++]=1;
        for(int i=0;i<c2;i++) nums[k++]=2;
        */
    }
};