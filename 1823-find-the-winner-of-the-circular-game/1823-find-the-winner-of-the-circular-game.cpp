class Solution {
public:
    int solve(int k,vector<int>& v,int i)
    {
        if(v.size()==1)
       return v[0]; 
        int idx=(i+k)% (v.size());
        v.erase(v.begin()+idx);
    return    solve(k,v,idx);
    
    }
    int findTheWinner(int n, int k) {
         k--; vector<int> v;
        for(int i=1;i<=n;i++)
            v.push_back(i);
      return  solve(k,v,0);
    }
};