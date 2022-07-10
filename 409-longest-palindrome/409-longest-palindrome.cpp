class Solution {
public:
    int longestPalindrome(string s) {
      map<char,int> mp; int ctr=0,c=0;
        for(int i=0;i<s.size();i++)
        mp[s[i]]++;
        for(auto it:mp)
        {
            if(it.second%2==0)
                ctr+=it.second;
            else {ctr+=it.second-1; c++;
        }}
        if(c>0)
        return ctr+1;
        return ctr;
    }
};