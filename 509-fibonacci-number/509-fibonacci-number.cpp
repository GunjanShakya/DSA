class Solution {
public:
    int fib1(int n)
    {
        if(n==0 or n==1)
            return n;
        return fib1(n-1)+fib1(n-2);
    }
    int fib(int n) {
        return fib1(n);
    }
};