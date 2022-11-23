class Solution {
public:
    bool checkrow(int i, int j, vector<vector<char>>& board){
        int m = board[0].size();
        for(int col=0;col<m;col++){
            if(board[i][col]==board[i][j] && col!=j)
                return false;
        }
        return true;
    }
    
    bool checkcol(int i, int j, vector<vector<char>>& board){
        int n = board.size();
        for(int row=0;row<n;row++){
            if(board[row][j]==board[i][j] && row!=i)
                return false;
        }
        
        return true;
    }
    
    bool checkmat(int i, int j, vector<vector<char>>& board){
        int x=i-i%3;
        int y=j-j%3;
        
        for(int row=x;row<x+3;row++){
            for(int col=y;col<y+3;col++)
                if(board[row][col]==board[i][j] && row!=i && col!=j)
                    return false;
        }
        
        return true;
    }
    
    bool check(int i, int j, vector<vector<char>>& board){
        if(checkrow(i,j,board) && checkcol(i,j,board) && checkmat(i,j,board)) return true;
        else return false;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        for(int i=0; i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]!='.')
                    if(check(i, j, board)==false) return false;
            }
        }
        return  true;
    }
};