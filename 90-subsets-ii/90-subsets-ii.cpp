class Solution {
public:
    void solve(vector<vector<int>>& ans, int in, vector<int> arr, int n,vector<int> &v)
    {
         ans.push_back(v); 
        for(int i=in;i<n;i++)
        {
            if(i!=in and arr[i]==arr[i-1])
                continue;
            v.push_back(arr[i]);
            solve(ans,i+1,arr,n,v);
            v.pop_back();
    
        } 
    }
      vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         sort(nums.begin(),nums.end());
      vector<vector<int>>  ans; vector<int> v;
          solve(ans,0,nums,nums.size(),v);
          return ans;
    }
   /*********************************USING SET************************************************
    void solve(set<vector<int>>& ans, int i, vector<int> &nums,vector<int>& temp)
    {
        if(i==nums.size())
        {
            ans.insert(temp);
            return;
            
        } 
         temp.push_back(nums[i]);
        solve(ans,i+1,nums,temp);
        temp.pop_back();
        solve(ans,i+1,nums,temp);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
               set<vector<int>> ans; vector<int> temp;
        solve(ans,0,nums,temp);
        vector<vector<int>> s;
        for(auto it:ans)
            s.push_back(it);
        return s;
    } */
};