class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> mp(26);
         for(int i = 0;i <s.size(); i++){
        if(mp[s[i]] < 1)
          mp[s[i]]++;
        else
          return s[i];
      } return s[0];
    }
};