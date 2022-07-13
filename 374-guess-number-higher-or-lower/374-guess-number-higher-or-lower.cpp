/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
#define ll long long int 
class Solution {
public:
    ll guessNumber(int n) {
       ll s=1,e=n;
        ll m;
       while(s<=e)
       {  m=(s+e)/2;
        if(guess(m)==0)
            break;
        else if(guess(m)==-1)
            e=m-1;
        else 
            s=m+1; }
        return m;
    }
};