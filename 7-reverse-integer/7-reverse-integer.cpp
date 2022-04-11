class Solution {
public:
     #define UPPER_LIMIT 2147483647 / 10
    #define LOWER_LIMIT -2147483648 / 10
    int reverse(int x) 
    {
        int rev=0;
        int num=x;
         while (num != 0) {
        
        if((rev>0) && (rev> UPPER_LIMIT))
            return 0;
         if((rev<0) && (rev<LOWER_LIMIT) )
            return 0;
           
         rev =rev*10+(num%10);
             num=num/10;
         }
        return rev;
    }
};