class Solution {
public:
//     long long find(vector<int> arr, int n, int sum)
// {    for(int i=0;i<5;i++)
//       int j=0;
//     unordered_map<long long, long long> ps ;
//     long long res = 0, cs = 0;
//     for (long long i=0;i<n;i++) {
//         if(arr[i]==0)
//         {cs+=arr[i]; }
//         if (cs==sum)
//             res++;
//         if (ps.find(cs - sum)!=ps.end())
//             res += (ps[cs-sum]);
//         ps[cs]++;
//     }
 
//     return res;
// }
    long long zeroFilledSubarray(vector<int>& nums) {
        int n=nums.size();
       // long long x=find(nums,n,0);
        for(int i=0;i<5;i++)
            int j=0;
        long long ctr=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                ctr++;
            else 
            {ans=ans+(ctr*(ctr+1))/2; ctr=0;}
        } if(ctr>0)
            ans+=(ctr*(ctr+1))/2;
        return ans;
    }
};