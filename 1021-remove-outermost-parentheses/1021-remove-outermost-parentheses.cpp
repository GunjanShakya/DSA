class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st; string ans; st.push(s[0]);
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='(' and st.size()>0)
            {st.push(s[i]); ans+=s[i]; }
            else if(s[i]==')' and st.top()=='(' and st.size()>1)
            { ans+=s[i]; st.pop();
            } else if(s[i]==')' and st.top()=='(' and st.size()==1)
                st.pop();
            else st.push(s[i]);
        } return ans;
    }
};