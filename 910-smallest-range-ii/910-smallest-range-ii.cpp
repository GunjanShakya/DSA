class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
     vector<int> v; int n=nums.size()-1;
        sort(nums.begin(),nums.end());
        int a=nums[0],b=nums[n]; 
      
      int res=b-a;
       for(int i=0;i<n;i++) 
       {
           int mi=min(a+k,nums[i+1]-k);
           int ma=max(b-k,nums[i]+k);
           res=min(res,ma-mi);
       } return res;
    }
};