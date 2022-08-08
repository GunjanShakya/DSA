class Solution {
public:
    void solve(int k,int &ans,vector<int>& v,int i)
    {
        if(v.size()==1)
        {ans=v[0]; return; }
        int idx=(i+k)% (v.size());
        v.erase(v.begin()+idx);
        solve(k,ans,v,idx);
        return;
    }
    int findTheWinner(int n, int k) {
        int ans=-1; k--; vector<int> v;
        for(int i=1;i<=n;i++)
            v.push_back(i);
        solve(k,ans,v,0);
        return ans;
    }
};