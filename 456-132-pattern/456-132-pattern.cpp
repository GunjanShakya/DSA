class Solution {
public:
    bool find132pattern(vector<int>& nums) {
      stack<pair<int,int>> s;
        int cmin = nums[0];
        for(int i=1; i<nums.size(); i++){
            while(!s.empty() && nums[i]>=s.top().first){
                s.pop();
            }
            if(!s.empty() && nums[i]>s.top().second){
                return true;
            }
            s.push({nums[i],cmin});
            cmin = min(nums[i],cmin);
        }
        return false;

    }
};