class Solution {
public:
    int titleToNumber(string s) {
        int r=0;
        for(int i=0;i<s.size();i++)
        {
            r=r*26;
            r+=s[i]-'A'+1;
        }
        return r;
    }
};
