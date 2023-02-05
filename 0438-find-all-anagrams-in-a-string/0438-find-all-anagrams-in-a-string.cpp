class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
int s_len = s.length();        // length of the string s
        int p_len = p.length();        // length of the string p
         vector<int> ans;
        if(s_len < p_len)       // if size of p is greater than size of s return empty vector
        return ans;
        
        vector<int> f_p(26,0);   // else
        vector<int> f_s(26,0);
        
                                    //first  sliding window
        for(int i=0;i<p_len;i++)
        {
            f_p[p[i]-'a']++;
            f_s[s[i]-'a']++;
        }
        
       
        if(f_p ==f_s)
        ans.push_back(0);
        
// Now  everytime decrease  the frequency of first character and increase the new character's frequency
        for(int i=p_len;i<s_len;i++){
            f_s[s[i-p_len] - 'a']--;
            f_s[s[i] - 'a']++;
// if the frequency of every character remain equal(f_p == f_s) then put the starting index in vector
            if(f_p == f_s) ans.push_back(i-p_len+1);
        }
        return ans;
    }
	};