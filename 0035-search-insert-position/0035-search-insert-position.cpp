class Solution {
public:
    int searchInsert(vector<int>& nums, int x) {
        int n = nums.size();
        if(x < nums[0])
            return 0;
        if(x > nums[n-1])
            return n;
        
        int low = 0, high = n-1;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(nums[mid] == x)
                return mid;
            if(nums[mid] > x)
                high = mid - 1;
            else
                low = mid + 1;
        }
        
        return low;
    }
};