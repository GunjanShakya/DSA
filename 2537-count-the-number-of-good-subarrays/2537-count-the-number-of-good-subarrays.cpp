class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        map<int,int> mp;
        long long pairs=0,ans=0,l=0;
        for(int i=0;i<nums.size();i++)
        {
          mp[nums[i]]++;
          pairs+=mp[nums[i]]-1;
            if(pairs>=k)
            {
                while(l<=i and pairs>=k)
                {
                    ans+=nums.size()-i;
                    mp[nums[l]]--;
                    pairs-=mp[nums[l]];
                    if(mp[nums[l]]==0) mp.erase(nums[l]);
                    l++;
                }
            }
        } return ans;
    }
};