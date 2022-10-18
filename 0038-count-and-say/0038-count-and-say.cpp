class Solution {
public:
    string countAndSay(int n) {
     if (n==1) return "1";
        string newStr = countAndSay(n-1);
        string ans;
        int count = 0;
        for(int i = 0 ; i < newStr.size(); i++){
            count++;
            if (i == newStr.size()-1 || newStr[i] != newStr[i+1]){
                ans+= (count + '0');
                ans+= newStr[i];
                count = 0;
            } 
        }
        
        return ans;    
    }
};