class Solution {
public:
    int countSubstrings(string s) {
        int l,r,n=s.size(),a=0;
        for(int i=0;i<n;i++)
        {
           // a++;
            l=i,r=i;
            while(l>=0 and r<n and s[l]==s[r])
            {
                a++;
                l--; 
                r++;
            }
            l=i,r=i+1;
             while(l>=0 and r<n and s[l]==s[r])
            {
                a++;
                l--; 
                r++;
            }
        } return a;
    }
};