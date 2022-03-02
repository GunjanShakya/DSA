class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char> s1,s2;
        for(int i=0;i<s.size();i++)
            s1.push(s[i]);
        for(int i=0;i<t.size();i++)
            s2.push(t[i]);
        while(s2.size() && s1.size())
        {
            if(s1.top()==s2.top())
            {
                s1.pop(); s2.pop();
            }
            else s2.pop();
        }
        if(s1.size())
            return false;
        return true;
    }
};
