class Solution {
public:
    int getSum(int a, int b) {
       while(b)
       {
           // int temp=(a & b)<<1;
           unsigned temp=(a & b); //left shift of negative value error
           a=a^b;
           b=temp<<1;
       } return a;
    }
};