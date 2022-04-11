class Solution {
public:
    string reverseVowels(string s) {
        vector <char> s1; vector<int> v;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
           { s1.push_back(s[i]); v.push_back(i);}
       } reverse(s1.begin(),s1.end());
        for(int i=0;i<v.size();i++)
        {
            s[v[i]]=s1[i];
        } return s;
    }
};