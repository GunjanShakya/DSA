class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> n3;
        for(int i=0;i<m;i++)
        { n3.push_back(nums1[i]);
           // if(i+m<=nums1.size() and nums2[i]) 
           //     nums1[i+m]=nums2[i];
           //  else if(nums2[i]) nums1.push_back(nums2[i]);
        }
        for(int i=0;i<n;i++)
            n3.push_back(nums2[i]);
        sort(n3.begin(),n3.end());
        nums1=n3;
    }
};