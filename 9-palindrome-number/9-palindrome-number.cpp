class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
int rem; long long  rev=0;
        if(x<0) return false;
while(n){
rem = n%10;
rev = rev*10+rem;
n = n/10;
}
return x == rev;
    }
};