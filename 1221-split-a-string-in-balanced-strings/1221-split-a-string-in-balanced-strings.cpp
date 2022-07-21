class Solution {
public:
    int balancedStringSplit(string s) {
        int rs=0,ls=0,ctr=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
                rs++;
            if(s[i]=='L')
                ls++;
            if(rs==ls)
            {
                ctr++;
                rs=0; ls=0;
            }
        } return ctr;
    }
};