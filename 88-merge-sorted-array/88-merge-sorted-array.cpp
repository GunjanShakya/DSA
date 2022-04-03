class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int p=m+n-1;
        for(int i=0;i<nums2.size();i++)
        {
            nums1[p]=nums2[i];
            p--;
        }
        sort(nums1.begin(),nums1.end());
    }
};