class Solution {
public:
    int minCost(string s, vector<int>& neededTime) {
     int n=s.size(); int us=0;
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            { us+=min(neededTime[i],neededTime[i-1]);  
            neededTime[i]=max(neededTime[i],neededTime[i-1]);
            }
        } return us;
    }
};