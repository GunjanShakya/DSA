class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& qu) {
        vector<int>answer;
        int sum=0;
        for(int val:nums){
            if (val%2==0)sum+=val;
        }
        int ind,val,num;
        for(int i=0;i<qu.size();i++){
            vector<int>q=qu[i];
            val=q[0];ind=q[1];
            num=nums[ind];
            if (num%2==0){
                sum-=num; nums[ind]+=val;
                if (nums[ind]%2==0){
                    sum+=nums[ind];
                   answer.push_back(sum); 
                }
                else{
                    answer.push_back(sum);
                }
            }
            else{
                nums[ind]+=val;
                if (nums[ind]%2==0){
                    sum+=nums[ind];
                    answer.push_back(sum); 
                }
                else{
                    answer.push_back(sum);
        }}
        }
        return answer;
    }
};