// https://leetcode.com/problems/sudoku-solver/

// O(9^k)   k = empty cells   SC: O(1)
// ⭐ UNDERSTAND HOW I MARKED THE BOXES 2D ARRAY WITH ROWS AND COLS

// class Solution {
// public:
//     bool isSafe(int i, int row, int col, vector<vector<bool>> &boxes, vector<vector<bool>> &rows, vector<vector<bool>> &cols)   {
//         if(rows[row][i] || cols[col][i] || boxes[(row/3)*3 + col/3][i]) return false;
//         else return true;
//     }

//     // using true just for early pruning, false doens't matter here~

//     bool solve(int row, int col, vector<vector<bool>> &boxes, vector<vector<bool>> &rows, vector<vector<bool>> &cols,
//     vector<vector<char>>& board) 
//     {
//         // base case
//         if(row == 9 && col == 0) {
//             return true;
//         }
        
//         int newRow = (col+1 == 9 ? row+1 : row);
//         int newCol = (col+1 == 9 ? 0: col+1);

//         if(board[row][col] != '.') {
//             return solve(newRow, newCol, boxes, rows, cols, board);
//         }

//         else{
//             // try all numbers in this cell~
//             for(int i = 1; i <= 9; i++) {
//                 if(isSafe(i, row, col, boxes, rows, cols)) {
//                     board[row][col] = i+'0';

//                     // update states~
//                     rows[row][i] = true;
//                     cols[col][i] = true;
//                     boxes[(row/3)*3 + col/3][i] = true;

//                     if(solve(newRow, newCol, boxes, rows, cols, board) == true) return true;

//                     // update states~
//                     board[row][col] = '.';
//                     rows[row][i] = false;
//                     cols[col][i] = false;
//                     boxes[(row/3)*3 + col/3][i] = false;
//                 }   
//             }

//             return false;
//         }
//     }

//     void solveSudoku(vector<vector<char>>& board) {
//         vector<vector<bool>> boxes(9, vector<bool>(10, false));
//         vector<vector<bool>> rows(9, vector<bool>(10, false));
//         vector<vector<bool>> cols(9, vector<bool>(10, false));

//         for(int row = 0; row < 9; row++) {
//             for(int col = 0; col < 9; col++) {
//                 if(board[row][col] != '.') {
//                     rows[row][(board[row][col]) - '0'] = true;
//                     cols[col][(board[row][col]) - '0'] = true;
//                     boxes[(row/3)*3 + col/3][board[row][col]- '0'] = true;
//                 }
//             }
//         }

//         solve(0, 0, boxes, rows, cols, board);
//     }
// };