class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         map<int,int> visited;
        for(int i = 0;i<nums.size();i++)
        {
            if(visited[nums[i]]==0)
                visited[nums[i]] = 1;
            else if(visited[nums[i]]==1)
            {
                for(int j = 0;j<i;j++)
                {
                    if(nums[j] == nums[i])
                    {
                        int check = abs(i-j);
                        if(check<=k)
                            return true;
                    }
                }
            }
        }
        
        return false;
    }
};