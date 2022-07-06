class Solution {
public:
   
    double pow(double x,int n)
    {
        if(n==0)
            return 1;
     double   ans=pow(x,n/2);
        if(n%2==0)
            return ans*ans;
        return x*ans*ans;
    }
    double myPow(double x, int n) {
       if(n>0) return pow(x,n);
        if(n<0) return pow(1/x,abs(n));
        return 1;
    }
};