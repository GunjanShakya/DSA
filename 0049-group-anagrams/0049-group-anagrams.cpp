class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        unordered_map<string, vector<string>> um;
        for(auto it: strs)
        {
            string x=it;
            sort(it.begin(), it.end());
            um[it].push_back(x);
        }
        
        for(auto it: um)
            v.push_back(it.second);
        return v;
    }
};