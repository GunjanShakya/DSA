class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v; unordered_map<int,int> m;
        for(int i=0; i<nums2.size(); i++){
            int id = i+1; int init = -1;
            while(id<nums2.size()){
                if(nums2[id]>nums2[i]){
                    init = nums2[id];
                    break; 
                }
                id++;
            }
            m[nums2[i]] = init;
        }
        for(int i=0; i<nums1.size(); i++)
            v.push_back(m.at(nums1[i]));
        return v;
    }
};