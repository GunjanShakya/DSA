class Solution {
public:
    int res=0;
   
    int maxLength(vector<string>& arr) {
        generateString("", arr, 0);
        return res;
    }
    void generateString(string str, vector<string>& arr, int itr){
        if(!isUnique(str))
            return ;
        if(res<str.size())
            res=str.size(); 
        for(int i=itr;i<arr.size();i++)
          generateString(str+arr[i], arr, i+1);
    }
    
    bool isUnique(string word){
        set<char> st;
        for (auto ele : word) {
            if (st.find(ele) != st.end()) return false;
            st.insert(ele);
        }
        return true;
    }
};