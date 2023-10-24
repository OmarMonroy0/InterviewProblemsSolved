class Solution {
public:
    bool checkRow(const vector<vector<char>> &board,int row,int col ){
        for (int i = 0; i  < 9; i++ ){
            if ( i != row)
                if (board[i][col] == board[row][col]) 
                    return false;
            
        }
        return true;
    }

     bool checkColumn(const vector<vector<char>> &board,int row,int col ){
        for (int i = 0; i  < 9; i++ ){
            if ( i != col)
                if (board[row][i] == board[row][col]) return false;
        }
        return true;
    }

    bool checkSquare(const vector<vector<char>> &board,int row,int col){
        int i = row / 3;
        int j = col / 3;
        for (int r  = i * 3; r < ( i * 3) + 3; r++ ){
            for (int c = j *3; c < ( j *3) + 3; c++){
                if ( r != row  and c != col)
                    if ( board[r][c] == board[row][col]) return false;
            }
        }
        return true;
    }
   
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9;j ++){
                if (board[i][j] != '.')
                    if(!checkRow(board,i,j) or !checkColumn(board,i,j) or !checkSquare(board,i,j))
                        return false;
            }
        }
        return true;
    }
};