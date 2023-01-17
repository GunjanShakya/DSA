class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int cnt0=0,cnt1=0;
for(auto it:s)if(it=='0')cnt0++;
int n=s.size();
int res=min(cnt0,n-cnt0);
if(cnt0==n || cnt0==0)return 0;
for(auto it:s){
if(it=='1'){
res=min(res,cnt1+cnt0);
cnt1++;
}
else cnt0--;
}
return res;
    }
};