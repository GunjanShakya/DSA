class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
          int n=nums.size();
        vector<int>a(n,0);
        priority_queue<pair<int,int>>p;
        a[0]=nums[0];
        p.push({a[0],0});
        for(int i=1;i<n;i++)
        {
            while(p.size() and p.top().second<i-k)
                p.pop();
            a[i]=nums[i]+p.top().first;
            p.push({a[i],i});
        }
        return a[n-1];
    }
};