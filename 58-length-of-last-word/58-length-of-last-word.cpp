class Solution {
public:
    int lengthOfLastWord(string s) { int ctr=0;
        for(int i=s.size()-1;i>=0;i--)
        { if(ctr==0 and s[i]==' ')
            continue;
             else if(s[i]==' ')
                  break;
            else ctr++;
        } return ctr;
    }
};