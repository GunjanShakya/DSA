class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        unordered_map<char, int> mp1, mp2;
		 for (char c: s)
            mp1[c]++;
        for (char c: t)
            mp2[c]++;
// If occurrance of each character is same in both the strings, then the string is anagram.
        for (int i = 0; i < s.size(); i++)
            if (mp1[s[i]] != mp2[s[i]])
                return false;
        return true;
    }
};