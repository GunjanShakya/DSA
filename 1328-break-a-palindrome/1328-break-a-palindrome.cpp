class Solution {
public:
    string breakPalindrome(string s) {
        if(s.size()==1) return "";
        int i=0;
        int j=s.length()-1;
        bool flag=false;
        while(i<j){
            if(s[i]!='a'){
                s[i]='a';
                flag=true;
                break;
            }
            i++;
            j--;
        }
        if(!flag) s[s.length()-1]='b';
        return s;  
    }
};