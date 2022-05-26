class Solution {
public:
    int hammingWeight(uint32_t n) {
        //int mask=11111111111111111111111111111111;
        int c=0;
        while(n)
        {
            n=n & n-1;
                c++;
           // n--;
        }
        return c;
    }
};