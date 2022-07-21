class Solution {
public:
    int minimumMoves(string s) { int ctr1=0,ctr=0,c1=0;
        for(auto i:s)
            if(i=='O')
                ctr1++;
        int n=s.size(); 
         if(ctr1==n)
            return 0;
        for(int i=0;i<n;i++)
        {   
            if(s[i]=='X')
            {
                s[i]='O';
                ctr++; 
            }
          else  if(s[i]=='O' and ctr>0)
                ctr++; 
            if(ctr==3)
            { 
                ctr=0;
                c1++;
            } 
        } if(ctr==0)
            return c1; //cout<<ctr;
        return c1+1;
       
    }
};