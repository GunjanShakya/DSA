class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
         
        vector<int> d(n+1,0);
        for(auto x:t)
        { d[x[0]]--;
         d[x[1]]++;
        } 
        for(int i=1;i<=n;i++)
        {
            if(d[i]==n-1)
                return i;
        } return -1;
        
        
//       vector<int>adj[n];
//         for(int i=0;i<n;i++)
//         {
//             adj[t[i][0]].push_back(t[i][1]);
            
//         } vector<int> in(n),out(n),vis(n,0);
//         queue<int> q;
     
//          q.push(1);
//         vis[adj[0]]=1;
//          while(!q.empty())
//          {
//              int node=q.front();
//              q.pop();
//              for(auto it:adj[node])
//              { if(!vis[it]) {
//                  q.push(it);
//                  out[i]++;
//                  in[it]++; }
//              }
                 
//          } 
//      for(int i=0;i<n;i++)
//      {
//          if(in[i]-out[i]==n-1)
//              return i;
//      } return -1;
    }
};