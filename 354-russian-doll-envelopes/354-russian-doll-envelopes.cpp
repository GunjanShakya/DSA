class Solution {
public:
    
    static bool compare(vector<int>& a, vector<int>& b)
    {
        if(a[0] == b[0])
        {
            return a[1] > b[1];
        }
        else
        {
            return a[0] < b[0];
        }
    }
    
    int maxEnvelopes(vector<vector<int>>& arr) {
        
        int n = arr.size();
        
        sort(arr.begin(), arr.end(), compare);
        
        vector<int> dp;
        
        for(int i = 0; i < n; i++)
        {
            int height = arr[i][1];
            
            int idx = lower_bound(dp.begin(), dp.end(), height) - dp.begin();
            
            if(idx == dp.size())
            {
                dp.push_back(height);
            }
            else
            {
                dp[idx] = height;
            } 
        }
        
        return dp.size();
    }
};