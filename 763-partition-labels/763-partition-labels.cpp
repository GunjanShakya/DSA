class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size(); 
    int i=0,j=0;
    vector<int> res;
    vector<int> dp(26,-1);
    for(int i=n-1;i>=0;i--)
    {
       if(dp[s[i]-'a']==-1) dp[s[i]-'a'] = i; 
    }
    while(j<n)
    {
       int last = dp[s[i]-'a'];
       while(j<=last)
       {
           if(dp[s[j]-'a'] > last) last = dp[s[j]-'a'];
           j++;
       }
        res.push_back(j-i);
        i = j;
    }
    return res;
    }
};