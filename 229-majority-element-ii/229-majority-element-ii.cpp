class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int x=floor(nums.size()/3);
        vector<int> v;
        map<int,int> mp;
         for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        for(auto it:mp)
        {
            if(it.second>x)
                v.push_back(it.first);
        }
        return v;
    }
};