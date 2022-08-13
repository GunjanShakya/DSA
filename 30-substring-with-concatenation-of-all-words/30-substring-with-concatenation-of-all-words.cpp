class Solution {
public:
   vector<int> findSubstring(string s, vector<string>& words) {
    int n = s.length();
    int m = words.size();
    int len = words[0].size();
    if(n == 0 || m==0 || len==0)
        return {};
    vector<int> res;
    
    unordered_map<string, int> mp, mp1;
    for(auto &x : words)
        mp[x]++;
    
    for(int i=0;i<=n-m*len;i++) {
        mp1 = mp;
        for(int j=0;j<m;j++) {
            string temp = s.substr(i+j*len, len);
            if(mp1.find(temp) != mp1.end()) {
                mp1[temp]--;
                if(mp1[temp] == 0)  mp1.erase(temp);
                if(mp1.empty()) {
                    res.push_back(i);
                }
            }
            else 
                break;
        }
    }
    return res;
}
};