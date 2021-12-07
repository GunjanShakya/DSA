class Solution {
  public:
    int checkMirrorTree(int n, int e, int A[], int B[]) {
        map<int,vector<int>>m1,m2;
      for(int i=0;i<2*e;i+=2)m1[A[i]].push_back(A[i+1]);
      for(int i=0;i<2*e;i+=2)m2[B[i]].push_back(B[i+1]);
      for(auto it:m1){vector<int>t=it.second;reverse(t.begin(),t.end());m1[it.first]=t;}
      return m1==m2;
        // code here
    }
};
