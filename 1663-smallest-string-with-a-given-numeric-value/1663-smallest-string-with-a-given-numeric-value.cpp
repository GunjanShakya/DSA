class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans;
		for(int i=0;i<n;i++){
			for(int j=0;j<26;j++){
				 int t=k-(j+1);
				 if(t<=26*(n-i-1))
				 {
					 ans.push_back('a'+j);
					 k=t;
					 break;
				 }
			}
		}
		return ans;
    }
};