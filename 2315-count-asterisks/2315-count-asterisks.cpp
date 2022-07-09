class Solution {
public:
    int countAsterisks(string s) {
         int ctr=0;
        stack <char> st;
        for (int i=0; i<s.length(); i++){
            if (s[i]=='|'){
                if (!st.empty())
                     st.pop();
                else   st.push(s[i]);
            }
            else if (s[i]=='*'){
                if (st.empty())
                    ctr++;
            }
        }
        return ctr;
//         int ctr=0; vector<int> v;      
//         for(int i=0;i<s.size();i++)
//         {
//             if(s[i]=='|')
//             v.push_back(i);
//         } int k=0;
//         if(v.size()==0)
//         {
//             for(int i=0;i<s.size();i++)
//                 if(s[i]=='*')
//                     ctr++;
//         } 
//         else {
//            for(int i=0;i<s.size();i++)
//         { 
//             if(i==v[k])
//         {
//             i=v[k+1]+1;
//             k+=2;  
//         } 
//       else   if(s[i]=='*')
//            ctr++;  
//         } 
//         }
        
//         return ctr;
    }
};