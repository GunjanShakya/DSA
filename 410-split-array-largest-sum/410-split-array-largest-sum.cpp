class Solution {
public:
     bool isPossible(vector<int>& nums, int m, int mid){
        int splitCount = 1;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            if(sum+nums[i]<=mid){
                sum+=nums[i];
            }else{
                splitCount++;
                if(splitCount>m || nums[i]>mid)
                    return 0;
                sum = nums[i];
            }
        }
        return 1;
    }
    int splitArray(vector<int>& nums, int m) {
        int sum=0;
        for(int i=0; i<nums.size(); i++)
            sum+=nums[i];
        int start = 0, end = sum;
        int mid = start + (end-start)/2;
        int ans = -1;
        while(start<=end){
            if(isPossible(nums, m, mid)){
                ans = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
        return ans;
    }
};