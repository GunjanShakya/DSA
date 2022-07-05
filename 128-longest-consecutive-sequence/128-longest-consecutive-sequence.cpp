class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int ctr=0, c=0;
        if(nums.size()==0)
            return 0;
        vector<int> v;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
           v.push_back(nums[i]-nums[i-1]);
         for(int i=0;i<v.size();i++)
             cout<<v[i]<<" ";
        for(int i=0;i<v.size();i++)
        {
           
            if(v[i]==0)
                continue;
          else if(v[i]>1)
                ctr=0;
            else if(v[i]==1)
            {   
                ctr++;
                c=max(c,ctr);
            }
        } return c+1;
    }
};