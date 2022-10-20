class Solution {
public: // Moore's voting algo
    int majorityElement(vector<int>& nums) {
        int ctr=0; int ans=0;
        for(int i:nums)
        {
            if(ctr==0)
            {ans=i; ctr++; }
            else if(ans==i)
                ctr++;
            else ctr--;
        }
        return ans;
    }
    /*
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int n=nums.size();
        int x=n/2;
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second>x)
                return it->first;
        }
        return -1;
    } */
};