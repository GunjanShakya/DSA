class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,int> m1;
        unordered_map<string,int> m2;
        vector<string> v;
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            string word="";
            while(s[i]!=' ' && i<l)
            {
                word+=s[i];
                i++;
            }
            v.push_back(word);
        }
        if(v.size()!=pattern.length())
            return false;
        for(int i=0;i<pattern.size();i++)
        {
            if(m1[pattern[i]]!=m2[v[i]])
                return false;
            m1[pattern[i]] = i+1;
            m2[v[i]] = i+1;
        }
        return true;
    }
};