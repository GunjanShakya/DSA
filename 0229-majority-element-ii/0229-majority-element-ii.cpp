class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1=-1,num2=-1,ctr1=0,ctr2=0, n=nums.size();
        for(int it:nums)
        {
            if(num1==it)
                ctr1++;
            else if(num2==it)
                ctr2++;
            else if(ctr1==0)
            {num1=it; ctr1++;}
            else if(ctr2==0)
            { num2=it; ctr2++; }
            else {
                ctr1--; ctr2--;
            }
        }
        vector<int> v;
        ctr1=0,ctr2=0;
        for(int i:nums)
        {
            if(i==num1) ctr1++;
            else if(i==num2) ctr2++;
        }
        if(ctr1>n/3) v.push_back(num1);
        if(ctr2>n/3) v.push_back(num2);
        return v;
    }
    /*
    vector<int> majorityElement(vector<int>& nums) {
        int x=floor(nums.size()/3);
        vector<int> v;
        map<int,int> mp;
         for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        for(auto it:mp)
        {
            if(it.second>x)
                v.push_back(it.first);
        }
        return v;
    } */
};