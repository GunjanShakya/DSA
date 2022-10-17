class Solution {
public:
    int totalFruit(vector<int>& s) {
         int i=0,j=0,mx=1;
    map<int,int> mp;
    while(j<s.size())
    {
        mp[s[j]]++;
        if(mp.size()<=2)
        mx=max(mx,j-i+1);
        else if(mp.size()>2)
        {
            while(mp.size()>2)
            {
                mp[s[i]]--;
                if(mp[s[i]]==0)
                mp.erase(s[i]);
                i++;
            }
        }
        j++;  
    }
                return mx;
    }
};