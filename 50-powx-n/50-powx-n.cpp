class Solution {
public:
    double pow(double x,int n)
    { double ans;
        if(n==0)
            return 1;
       ans= pow(x,n/2);
        if(n%2==0)
            return ans*ans;
     return x*ans*ans;
    }
    double myPow(double x, int n) {
      double ans=0;
        if(n>0)
           return pow(x,n);
        else if(n<0)
         return pow(1/x,abs(n));
 return 1;
    }
};