class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
         int sum = 0;
        int prev_sum = 0;
        unordered_set<int> s;
        for(int val : nums){
            sum = (sum+val)%k;
            if(s.find(sum)!=s.end())
                return true;
            s.insert(prev_sum);
            prev_sum = sum;
        }
         
        return false;
    }
};