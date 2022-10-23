class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans; int n=nums.size();
        int sum = (n*(n+1))/2 , givenSum = 0 ,  temp;
        unordered_map<int,int> mp;
        
        for(int i=0 ; i<n ; i++){
            mp[nums[i]]++;
            givenSum += nums[i]; 
            if(mp[nums[i]] > 1){
                temp = nums[i];
            }
        }
        ans.push_back(temp);
        ans.push_back(temp+(sum-givenSum));
        return ans;
    }
};