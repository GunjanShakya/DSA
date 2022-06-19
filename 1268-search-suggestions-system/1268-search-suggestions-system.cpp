class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(),products.end());
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(auto prod:products)
        {
             string s="";
            for(int i=0;i<prod.length();i++)
            {
                s+=prod[i];
                if(mp[s].size()<3)
                    mp[s].push_back(prod);
            }
        }
        string s="";
        for(int i=0;i<searchWord.length();i++)
        {
            s+=searchWord[i];
            ans.push_back(mp[s]);
        }
        return ans;
    }
};