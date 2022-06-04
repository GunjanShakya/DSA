class Solution {
public:
    typedef pair<int,int> pp;
    bool rowVisited[10];
    vector<string> grid;
    vector<pp> temp;
    vector<vector<string> > ans;
    bool check(float r,float c)
    {
        for(auto it:temp)
        {
            float slope = (it.second-c)/(it.first-r);
            if(abs(slope) == 1) return true;
        }
        return false;
    }
    void func(int col,int n)
    {
        if(col > n) 
        {
            ans.push_back(grid);
            return;
        }
        for(int i=1;i<=n;i++)
        {
            if(rowVisited[i] || check(i,col)) continue; //check for rows and diagonally safety
            
            rowVisited[i] = true;
            temp.push_back({i,col});
            grid[i-1][col-1] = 'Q';
            func(col+1,n);
            
            rowVisited[i] = false;  // removing queen from that row
            temp.pop_back();  //popping out its co-ordinate because we already evaluted it
            grid[i-1][col-1] = '.';  //making the empty as it is already processed
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        memset(rowVisited,0,sizeof(rowVisited));
        
        string temp;
        for(int i=0;i<n;i++) temp += '.';
        for(int i=0;i<n;i++) grid.push_back(temp);
  
        func(1,n);
        return ans;
    }
};