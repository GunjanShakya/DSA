class Solution {
public:
   static bool comparator(vector<int>&v1 , vector<int>&v2)
    {
       if(v1[0]==v2[0])
       {
           return v1[1]<v2[1];
       }
        return v1[0]>v2[0];
    }
    
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& p) {
        int n = p.size();
        sort(p.begin() , p.end() , comparator); //Sort according to height in decreasing manner. if both height same then that case i will sort according to k ie no of people greater height
       
         vector<vector<int>>res;
        for(int i = 0 ; i<n ; i++)
        {
            int ind = p[i][1];
            res.insert(res.begin() + ind , p[i]);
        }
        return res;
    }
};