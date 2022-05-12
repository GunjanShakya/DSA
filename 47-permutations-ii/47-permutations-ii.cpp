class Solution {
public:
    vector<vector<int>> ans;
    void calc(vector<int>& nums, int i){
        if(i==nums.size()){
            ans.push_back(nums);
            return ;
        }
        unordered_set<int> st;
        for(int j=i;j<nums.size();j++){
            if(st.count(nums[j]))continue;
            if(i!=j && nums[i]==nums[j])continue;
            st.insert(nums[j]);
            swap(nums[i],nums[j]);
            calc(nums,i+1);
            swap(nums[i],nums[j]);
        }
        return ;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        calc(nums,0);
        return ans;
    }
};