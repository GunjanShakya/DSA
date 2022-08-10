class Solution {
public:
    string strWithout3a3b(int a, int b) {
     string s;int n=a+b;
       
            for(int i=0;i<n;i++)
            {  if(a>b)
        {
                if(i<2 or s[i-1]!='a' or s[i-2]!='a')
                { s+='a'; a--; }
                else {s+='b'; b--;}
            
        } 
        else 
        {
            
                if(i<2 or s[i-1]!='b' or s[i-2]!='b')
                { s+='b'; b--; }
                else {s+='a'; a--;}
        } 
        }return s;
    }
};