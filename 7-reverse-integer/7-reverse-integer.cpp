class Solution {
public:
    int reverse(int x) {
        if(x==INT_MIN) return 0;
        long n=x<0? -1*x:x;
        long rev=0;
        while(n)
        { long a=n%10;
            rev=rev*10+a;
         if(rev>INT_MAX) return 0;
         n=n/10;
        }
        if(x<0)
            rev =-1*rev;
         return rev;
    }
};