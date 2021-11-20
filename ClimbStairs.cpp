#include <iostream>
#include <vector>
using namespace std;

int cs(int n,vector<int> &qb) {
  int a, b, c, sum;
  if (n == 0)
    return 1;
  if (n < 0)
    return 0;
   if(qb[n]!=0)
   return qb[n];
  a = cs(n - 1,qb);
  b = cs(n - 2,qb);
  c = cs(n - 3,qb);
  sum = a + b + c; 
  qb[n]=sum;  
  return sum;
}
int main() {
  int n;  cin >> n;
  vector<int> v(n+1,0);
  cout << cs(n,v) << endl;
}
