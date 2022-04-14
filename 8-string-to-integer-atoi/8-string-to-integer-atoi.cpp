class Solution {
public:
    int myAtoi(string s) { vector<int> a; int ctr=0;
      long long res = 0;
        int i = 0;
        bool isNeg = false;

        while (s[i] == ' ') ++i;
        if(s[i] == '-') {
            isNeg = true;
            ++i;
            }
            else if(s[i] == '+') ++i;


        while (s[i]>='0' && s[i]<='9')
        {
            res = res*10+s[i]-'0';
            if(res >= INT_MAX && !isNeg){res = INT_MAX; break;}
            else if(res > INT_MAX && isNeg){res = INT_MIN; break;}
            ++i;
        }
        return isNeg ? res*-1:res;
                          
                          
    }
};