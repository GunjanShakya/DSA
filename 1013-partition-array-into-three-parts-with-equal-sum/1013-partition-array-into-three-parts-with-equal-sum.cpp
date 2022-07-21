class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n=arr.size();
        int sum=0,s1=0,ctr=0;
        for(auto i:arr)
            sum+=i;
        if(sum%3!=0)
            return false;
        // if(sum==0)
        //     return true;
        for(int i=0;i<n;i++)
        {
            s1+=arr[i];
            if(s1==sum/3)
            {
                ctr++; s1=0;
            }
        } if(ctr>=3)
            return true;
        return false;
    }
};