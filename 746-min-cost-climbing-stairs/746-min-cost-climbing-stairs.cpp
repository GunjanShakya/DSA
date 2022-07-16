class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
       //dp sol
        vector<int>t(cost.size()+1); int a,b;
        for(int i=2;i<=cost.size();i++)
        {
            a=t[i-1]+cost[i-1];
            b=t[i-2]+cost[i-2];
            t[i]=min(a,b);
        }
        return t[cost.size()];
    }
};