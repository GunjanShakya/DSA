class Solution {
public:
    int read(string &s, int &i) {
        int ans = 0, num = 0, sign = 1;
        while(i < s.size()) {
            if(s[i] == '(')         num = read(s, ++i);
            else if(s[i] == ')')    break;
            else if(s[i] == '+')    ans += num*sign, sign =  1, num = 0;
            else if(s[i] == '-')    ans += num*sign, sign = -1, num = 0;
            else if(isdigit(s[i]))  num = num*10 + (s[i]-'0');
            ++i;
        }
        return ans += num*sign;
    }

    int calculate(string s) {
        int i = 0;
        return read(s, i);
    }
};
