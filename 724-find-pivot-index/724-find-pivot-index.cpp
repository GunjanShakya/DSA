class Solution {
public:
    int pivotIndex(vector<int>& nums) {
//         int i=1,j=nums.size()-2; int s=nums[0],s1=nums[nums.size()-1];
//         while(i<=j)
//         {
         
//            //s1+=nums[j];
//            if(s==s1)
//             return j; 
//             else if(s>s1)
//             { s1+=nums[j]; j--; }
//             else if(s1>s)
//             { s+=nums[i];  i++; }
//         } return -1;
        int s=0,ls=0;
        for(int i=0;i<nums.size();i++)
            s+=nums[i];
        for(int i=0;i<nums.size();i++)
        {
            if(s-ls-nums[i]==ls)
                return i;
            else ls+=nums[i];
        }
        return -1;
    }
};