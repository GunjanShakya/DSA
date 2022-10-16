class Solution {
private:
    vector<vector<int>>mem;
    int solve(vector<int>&diff,int index,int d){
        int n=diff.size();
        if(index>=n){
            if(d==0)
                return 0;
             else 
                return INT_MAX;
            
        } else if(d<=0)
            return INT_MAX;
         else if(mem[index][d]!=-1)
            return mem[index][d];
         else {
            int ans=INT_MAX,maxi=0;
            for(int next=index;next<n;next++){
                maxi=max(diff[next],maxi);
                int rec=solve(diff,next+1,d-1);
                if(rec!=INT_MAX){
                    rec+=maxi;
                }
                ans=min(ans,rec);
            }
            return mem[index][d]=ans;
        }
    }
public:
    int minDifficulty(vector<int>& diff, int d) {
        int n=diff.size();
        if(d>n)
            return -1;
         else {
            mem=vector<vector<int>>(n,vector<int>(d+1,-1));
            return solve(diff,0,d);
        }
    }
};