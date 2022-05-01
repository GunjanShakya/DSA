class Solution {
public:
    string fun(string s){
        stack<char> st;
        for(char c:s){
            if(c=='#' and st.empty()==false){
                st.pop();
            }
            if(c!='#') st.push(c);
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
    bool backspaceCompare(string s, string t) {
        s=fun(s);
        t=fun(t);
        return s==t;
    }
};