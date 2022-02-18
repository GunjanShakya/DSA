class Solution {
public:
    string removeKdigits(string num, int k) {
       string res="";
          if(num.length() == k)
              return "0"; 
          for (int i = 0; i < num.length(); i++)
          {
              while(res.size()>0  && res.back() > num[i] && k)  
              {
                     res.pop_back();
					 k--;
              }
              if(res.size() > 0 || num[i]!='0')   
              {
                 res.push_back(num[i]);
              }
          }
           while(res.size() && k )
           {
              res.pop_back(); 
              k--;
           }
          return res.empty() ? "0" : res; 
    }
};
