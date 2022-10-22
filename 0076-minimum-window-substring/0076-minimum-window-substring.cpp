class Solution {
public:
    string minWindow(string s, string t) {
         int n= s.length();
        int m = t.length();
        int len =n;
        map<char, int> mp;
        for(int i=0;i<m;i++){
            mp[t[i]]++;
        }
        int cnt =mp.size();
        string ans ="";
        int i=0, j=0;
        while(j<n){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){cnt--;}
            }
            if(cnt==0){
                while(cnt==0){
                    if(mp.find(s[i])!=mp.end() && mp[s[i]]<0){
                        mp[s[i]]++; i++;
                    }
                    else if(mp.find(s[i])!=mp.end() && mp[s[i]]==0){
                        break;
                    }
                    else i++;
                }
                if(len>=j-i+1){
                    ans =s.substr(i, j-i+1);
                    len = j-i+1;
                }
            } 
            j++;
        }
        return ans;
    }
};