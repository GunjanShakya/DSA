class Solution {
public:
int maxScore(vector<int>& cardPoints, int k) {
        int res = INT_MAX;
        int sum=0;
        int i=0;
        int n = cardPoints.size();
        for(int j=0;j<n;j++){
            sum+= cardPoints[j];
            if(j-i+1>n-k){
                while(j-i+1!= n-k){
                    sum-= cardPoints[i];
                    i++;
                }
                
            }
            if(j-i+1 == n-k){
                if(sum<res)
                    res = sum;
            }
        }
        cout<<res;
        sum = 0;
        for(auto x:cardPoints){
            sum+= x;
        }
        return sum-res;
    }

};