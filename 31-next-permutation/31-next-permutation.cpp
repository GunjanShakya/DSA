class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i,j;
        //Step 1- Traverse from back and Find the break-point i.e. a[i]<a[i+1]
        for(i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
                break;
        }
        //If there are no breakpoints, reverse and that will be our next permutations. Eg-54321
        if(i<0)
            reverse(nums.begin(),nums.end());
        //Step 2- Again traverse from back and find an idx such that a[idx1]<a[idx2]
     else
     {
         for(j=nums.size()-1;j>i;j--)
        {
            if(nums[i]<nums[j])
                break;
        }
        //Swap a[idx1] and a[idx2]
        swap(nums[i],nums[j]);
        
        // Reverse everything to the right of idx1
        reverse(nums.begin()+i+1,nums.end());
    } }
};


/* 
   Eg - 13542 so breakpoint is 3 so index 1 is 1
   Now we traverse from back to check if there is an idx2 such that element at idx2 > than that    at idx1.
   So idx2=3
   Swap elements so result = 14532
   Reverse everything right to 14 so the next permutation = 14235
  */