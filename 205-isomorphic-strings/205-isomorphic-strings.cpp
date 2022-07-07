class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char arr[128]={0},arr1[128]={0};
        for(int i=0;i<s.length();i++)
        {
            if(arr[s[i]]!=arr1[t[i]]) return false;
            arr[s[i]]=i+1;
            arr1[t[i]]=i+1;
        } return true;
    }
};