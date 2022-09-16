class Solution {
public: 
    vector<vector<int>> ans;
    void solve(vector<int> nums, vector<int> v,int k,int pos)
    {
        if(v.size()==k)
        {
            ans.push_back(v);
            return;
        }
     else {   
         for(int i=pos;i<nums.size();i++){
            v.push_back(nums[i]);
            solve(nums,v,k,i+1);
            v.pop_back();
        }
     }           
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> v; 
        vector<int> nums;
        for(int i=1;i<=n;i++)
        { nums.push_back(i); }
        solve(nums,v,k,0);
        return ans;
    }
};

