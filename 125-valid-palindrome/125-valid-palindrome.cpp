class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> s2, s1;
        for(int i=0;i<s.size();i++)
        {
            if('Z'>=s[i] and s[i]>='A' || 'z'>=s[i] and s[i]>='a' || s[i]>='0' and s[i]<='9')
            {
                s1.push_back(s[i]);
            }
        }   transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        s2=s1;
        reverse(s1.begin(),s1.end());
        if(s1==s2) return true;
        return false;
    }
};