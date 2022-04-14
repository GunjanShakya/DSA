class Solution {
public:
    bool detectCapitalUse(string word) { bool flag=true;
                if(word.size()==1)
                    return true;
        if(word[0]>='A' and word[0]<='Z' and word[1]>='A' and word[1]<='Z')
        {
            for(int i=2;i<word.size();i++)
            { if(word[i]>='A' and word[i]<='Z')
                    flag=true;
            else 
                return !flag; }
        } else if(word[0]>='A' and word[0]<='Z' and word[1]>='a' and word[1]<='z' )
        {
             for(int i=2;i<word.size();i++)
            { if(word[i]>='a' and word[i]<='z')
                    flag=true;
            else 
                return !flag; }
            
        } 
        else if(word[0]>='a' and word[0]<='z')
        { for(int i=1;i<word.size();i++)
            { if(word[i]>='a' and word[i]<='z')
                    flag=true;
            else 
                return !flag; }
            
        }
                                        return flag;
    }
};