class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector < vector < int >> ans = board;
       int i_move[] = {1,0,-1,0,1,-1,-1,1}, j_move[] = {0,1,0,-1,1,1,-1,-1};
      int n = board.size(), m = board[0].size(), live_count, new_i, new_j;
      for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
          live_count = 0;
          for (int move = 0; move < 8; move++) {
            new_i = i + i_move[move], new_j = j + j_move[move];
            if (-1 < new_i && new_i < n && -1 < new_j && new_j < m && board[new_i][new_j] == 1) live_count++;
          }
          if (board[i][j] == 1 && live_count < 2) ans[i][j] = 0;
          else if (board[i][j] == 1 && live_count > 3) ans[i][j] = 0;
          else if (board[i][j] == 0 && live_count == 3) ans[i][j] = 1;
        }
      board = ans;
    }
};