class Solution {
public:
    void dfs(vector<int> &vis,vector<vector<int>>& rooms,int i)
    { for(auto it:rooms[i])
    {if(!vis[it])
       {
           vis[it]=1;
           dfs(vis,rooms,it);
       } }
     
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size(); int ctr=0;
        vector<int> vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            { vis[i]=1;
                dfs(vis,rooms,i); ctr++;
            }
        }  if(ctr==1) return true;
        return false;
        // for(int i=0;i<vis.size();i++)
        // {
        //     if(vis[i]==0)
        //         return false;
        // } return true;
    }
};