class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
int n=s.size();
        int mx=n-1,swap1=0,swap2=0;
        for(int i=n-2;i>=0;i--)
        {
            if(s[i]>s[mx])
                mx=i;
            else if(s[i]<s[mx])
            { swap1=i; swap2=mx; }
        }
        swap(s[swap1],s[swap2]);
        int a=stoi(s);
        return a;
        
    }
};