class Solution {
public:
bool checkAlmostEquivalent(string name1, string name2) {
          int cnt[26] = {};
        for (char c : name1) cnt[c - 'a']++;
        for (char c : name2) cnt[c - 'a']--;
        for (int i = 0; i < 26; ++i) {
            if (abs(cnt[i]) > 3) return false;
        }
        return true;
    }
};