class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
 /********************************************************************************************                                      USING EXTRA SPACE
 
        sort(g.begin(),g.end(),greater<>());
        sort(s.begin(),s.end(),greater<>());
        stack<int> s1,s2; int ctr=0;
        for(int i=0;i<g.size();i++)
            s1.push(g[i]);
         for(int i=0;i<s.size();i++)
            s2.push(s[i]);
        while(!s1.empty() and !s2.empty())
        {
            if(s1.top()<=s2.top())
            {
                ctr++; 
                s1.pop();
                s2.pop(); 
            }
            // else if(s1.top()<s2.top())
            //     s1.pop();
            else if(s1.top()>s2.top())
                s2.pop();
        }
        return ctr;
********************************************************************************************/        
/*********************************************************************************************                                            WITHOUT EXTRA SPACE
         sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
       int i=0;
        int j=0;
        int count = 0;
        
        while(i<g.size() && j<s.size()){
            if(g[i]<=s[j]){
                count++;
                i++;
                j++;
            }else{
                j++;
            }
        }
        
        return count;
*********************************************************************************************/
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0;
        for(int j=0;i<g.size() && j<s.size();j++) 
	           if(g[i]<=s[j]) 
                   i++;
                 
      return i;
    }
};