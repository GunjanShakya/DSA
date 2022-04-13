class Solution {
public:
   
       vector<vector<int>> generateMatrix(int n) {
		vector<vector<int>> ret(n, vector<int>(n, 0));
		int tot = 0, x = 0, y = 0, limit = n*n;
		while (tot<limit) {
			while (tot<limit && y<n && ret[x][y] == 0) ret[x][y++] = ++tot;
			y--; x++;
			while (tot<limit && x<n && ret[x][y] == 0) ret[x++][y] = ++tot;
			x--; y--;
			while (tot<limit && y>=0 && ret[x][y] == 0) ret[x][y--] = ++tot;
			y++; x--;
			while (tot<limit && x>=0 && ret[x][y] == 0) ret[x--][y] = ++tot;
			x++; y++;
		}
		return ret;
	} 
    
};