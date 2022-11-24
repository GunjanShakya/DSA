class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0; i<board.size(); i++)
            for(int j = 0; j<board[0].size(); j++)
                if(backtrack(board, word, i, j, 0))
                    return true;
        return false;
    }

    bool backtrack(vector<vector<char>>& board, string& word, int i, int j, int idx){
        if(i<0 || i >= board.size() || j<0 || j >= board[0].size())
            return false;
        if(board[i][j] != word[idx])
            return false;
        if(idx == word.length()-1) return true;
        idx++;
        board[i][j] -= 64;
        if(backtrack(board, word, i-1, j, idx)) return true;
        if(backtrack(board, word, i+1, j, idx)) return true;
        if(backtrack(board, word, i, j-1, idx)) return true;
        if(backtrack(board, word, i, j+1, idx)) return true;
        board[i][j] += 64;
        return false;
    }

    
    
};