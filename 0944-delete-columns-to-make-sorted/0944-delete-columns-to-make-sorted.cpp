class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int m=strs.size(),n=strs[0].size(); int ctr=0;
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(strs[j][i]<strs[j-1][i])
                { ctr++; break;}
            }
        }
        return ctr;
    }
};