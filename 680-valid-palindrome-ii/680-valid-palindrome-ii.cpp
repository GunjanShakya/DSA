class Solution {
public:
    bool is_Palindrome(string s, int l, int r)    
    {
        while(l < r)
        {
            if(s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    
    bool validPalindrome(string s) 
    {
        int n = s.length();
        int j = n - 1, i =0;
        while(i < j)
        {
            if(s[i] != s[j])   
            {
                return (is_Palindrome(s, i + 1, j) || is_Palindrome(s, i ,j - 1)); 
            }
            ++i ,--j;
        }
        return 1;
    }
};