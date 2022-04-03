class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1)
            return 1;
        //  int i=1,j=1;
        // while(i<nums.size()){
        //     if(nums[i-1]!=nums[i]){
        //          nums[j]=nums[i];
        //         j++;              
        //     }            
        //     i++;
        // }
        // return j; 
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        nums.clear(); int ctr=0;
        for(auto i=m.begin(); i!=m.end();i++)
        {
            nums.push_back(i->first);
            ctr++;
        } sort(nums.begin(),nums.end());
        return ctr;
    }
};