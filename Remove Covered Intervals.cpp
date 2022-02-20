class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int c=-1,d=-1,res=0;
        for(int i=0;i<intervals.size();i++)
        {
            int a=intervals[i][0];
            int b=intervals[i][1];
            if(c<a and b>d)
            {  res++;
             c=a; }
            d=max(d,intervals[i][1]);
        }
        return res;
    }
};
