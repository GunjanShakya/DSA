class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        // if there is only one column, the ball is going to get stuck
        if (grid[0].size() == 1)
            return {-1};
        map <pair <int, int>, int > vs;
        // get a list of all the positions where a ball may get stuck (i.e. all the V's in the grid)
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (j == 0)
                {
                    if (grid[i][j] == -1 or (grid[i][j] == 1 and grid[i][j+1] == -1))
                        vs[make_pair(i,j)]++;    
                }     
                else if (j == grid[0].size()-1)
                {
                    if (grid[i][j] == 1 or (grid[i][j] == -1 and grid[i][j-1] == 1))
                        vs[make_pair(i,j)]++;
                }
                else if (grid[i][j] == 1 and grid[i][j+1] == -1)
                    vs[make_pair(i,j)]++;
                else if (grid[i][j] == -1 and grid[i][j-1] == 1)
                    vs[make_pair(i,j)]++;
            }
        } 
        vector <int> ballcol (grid[0].size());
        for (int i = 0; i < grid[0].size(); i++)
            ballcol[i] = i;
        for (int i = 0; i < grid.size(); i++)
        {        
            for (int j = 0; j < ballcol.size(); j++)
            {
                // if a ball is already stuck, ignore it
                if (ballcol[j] == -1)
                    continue; 
                // if a ball is in position of a V, it is stuck
                if (vs[make_pair(i, ballcol[j])])
                {
                    ballcol[j] = -1;
                    continue;
                }
                // change the column of the ball according to the slope
                ballcol[j] += grid[i][ballcol[j]];
            }
            
        }
           return ballcol;
    }
};