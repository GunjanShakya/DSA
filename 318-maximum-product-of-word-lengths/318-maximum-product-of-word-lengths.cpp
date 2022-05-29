class Solution {
public:
    int maxProduct(vector<string> &words) {
        vector<int> freq(words.size(), 0);
        for (int i = 0; i < words.size(); i++) {
            for (char ch : words[i]) {
                freq[i] = freq[i] | (1 << (ch - 'a'));
            }
        }
        int res = 0;
        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                if ((freq[i] & freq[j]) == 0) res = max(res, (int)(words[i].length() * words[j].length()));
            }
        }
        return res;
    }
};