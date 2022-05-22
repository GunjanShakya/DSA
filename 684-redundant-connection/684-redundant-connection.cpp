class Solution {
public:
    int find(int n,vector<int> &par)
    {
        if(n==par[n])
            return n;
        return par[n]=find(par[n],par);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
       vector<int> par(1001,0);
        for(int i=0;i<par.size();i++)
           par[i]=i;
        vector<int> ans;
        for(auto it:edges)
        {
            int x=it[0],y=it[1];
            int p1=find(x,par);
            int p2=find(y,par);
            if(p1==p2)
                ans=it;
            else par[p1]=p2;
        } return ans;
        }
};