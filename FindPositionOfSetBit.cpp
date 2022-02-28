// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int n) { int ctr=0;
        // code here 
        if(__builtin_popcount(n)>1 || n==0 )
        return -1;
        else {
            while(n)
            {
                ctr++; n=n>>1;
            }
            return ctr;
        }
    }
};
