class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m; vector<int> v;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        for(auto it=m.begin();it!=m.end();it++)
        {
            minh.push({it->second,it->first});
            if(minh.size()>k)
                minh.pop();
        }
        while(minh.size())
        {
            v.push_back(minh.top().second);
            minh.pop();
        }
        return v;
    }
};
