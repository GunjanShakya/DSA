class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        sort(points.begin(),points.end());
        int count=1;
        int idx=points[0][1];
        for(int i=1;i<n;i++){
            if(points[i][0]<=idx)
                idx=min(idx,points[i][1]);
            else{
                count++;
                idx=points[i][1];
            }
        }
        return count;
    }
};