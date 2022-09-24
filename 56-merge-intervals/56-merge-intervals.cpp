class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& i) {
    vector<vector<int>> ans;
        sort(i.begin(),i.end());
        if(i.size()==0) return ans;
        vector<int> temp=i[0];
        for(auto it:i)
        {
            if(it[0]<=temp[1])
                temp[1]=max(it[1],temp[1]);
            else {
                ans.push_back(temp);
                temp=it;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};