class Solution {
public:
//     bool sortcol(const vector<int>& v1, const vector<int>& v2)
// {
//     return v1[1] < v2[1];
// }
    int eraseOverlapIntervals(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        if(v.size()==1)
            return 0;
        int p=v[0][1],c=0;
        for(int i=1;i<v.size();i++)
        {
            if(v[i][0]>=p)
                p=v[i][1];
            else {
                c++; 
                if(v[i][1]<p)
                    p=v[i][1];
            }
        } return c;
    }
};