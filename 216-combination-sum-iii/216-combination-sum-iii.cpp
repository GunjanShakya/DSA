class Solution {
public:    
    vector<int> values = {1,2,3,4,5,6,7,8,9};
    vector<vector<int>> ans;
    void comb(int k, int n, int idx, vector<int> val){
        if(n == 0){
            if(k == 0){
                ans.push_back(val);
            }
            return;
        }
        if(n < 0 || idx == 0){
            return;
        }
        
        comb(k, n, idx - 1, val);
        val.push_back(values[idx - 1]);
        comb(k - 1, n - values[idx - 1], idx - 1, val);
        val.pop_back();
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> sub;
        
        comb(k ,n, 9, sub);
        return ans;
    }
};