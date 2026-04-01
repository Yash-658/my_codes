// FOR LEETCODE ONE - https://leetcode.com/problems/n-queens/submissions/1965164484/

// TC: O(N! * n^2)  SC: O(n*n)     (extra n² came by copying the board into ans)
// 👉 “Why not O(n^n)?” “Because we never reuse rows, so it’s permutations, not combinations with repetition.”

// class Solution {
// public:
//     bool isSafe(int row, int col, vector<bool> &rows, unordered_map<int,bool> &downDiag,  unordered_map<int,bool> &upDiag) {
//         if(rows[row] || downDiag[row-col] || upDiag[row+col]) { // if for map that value doesn't exist, it will initialise it with false~
//             return false;
//         }

//         else return true;
//     }

//     void solve(int col, int n, vector<bool> &rows, unordered_map<int,bool> &downDiag,  unordered_map<int,bool> &upDiag, vector<vector<string>> &ans, vector<string> &board) 
//     {
//         // base case
//         if(col == n) {
//             // store this arrangement in ans~
//             ans.push_back(board);
//             return;
//         }

//         for(int row = 0; row < n; row++) {
//             if(isSafe(row, col, rows, downDiag, upDiag)) {
//                 // state update~
//                 board[row][col] = 'Q';
//                 rows[row] = true; 
//                 downDiag[row-col] = true;
//                 upDiag[row+col] = true;

//                 solve(col+1, n, rows, downDiag, upDiag, ans, board);

//                 // state update~
//                 board[row][col] = '.';
//                 rows[row] = false; 
//                 downDiag[row-col] = false;
//                 upDiag[row+col] = false;
//             }
//         }
//     }

//     vector<vector<string>> solveNQueens(int n) {
//         vector<vector<string>> ans;
//         vector<string> board(n, string(n, '.'));

//         vector<bool> rows(n, false);
//         unordered_map<int,bool> downDiag;
//         unordered_map<int,bool> upDiag;

//         solve(0, n, rows, downDiag, upDiag, ans, board);
//         return ans;
//     }
// };








// love babr solution

// #include <bits/stdc++.h> 

// // optimisation   (use hash vectors formore efficiency)
// unordered_map<int, bool> rowCheck;
// unordered_map<int, bool> up_D_Check;
// unordered_map<int, bool> low_D_Check;


// void saveState(vector<vector<int>> &chessBoard, int &n, vector<vector<int>> &res) {
// 	vector<int> temp;
// 	temp.reserve(n*n);
// 	for(int i = 0; i < n; i++) {
// 		for(int j = 0; j < n; j++) {
// 			temp.push_back(chessBoard[i][j]);
// 		}
// 	}


// 	res.push_back(temp);
// }

// bool isSafe(vector<vector<int>> &chessBoard, int &n, int row, int col) {
	
// 	if(rowCheck[row]) return false;
// 	if(up_D_Check[row-col]) return false;
// 	if(low_D_Check[row+col]) return false;
// 	return true;
// }

// void findPlacing(vector<vector<int>> &chessBoard, int &n,
// 	int col, vector<vector<int>> &res) 
// {
// 	// base case
// 	if(col == n) {
// 		// that means this is a valid placement, save this~
// 		saveState(chessBoard, n, res);
// 		return;
// 	}

// 	// check for each row for this column if this is valid placement~
// 	for(int i = 0; i < n; i++) {
// 		if(isSafe(chessBoard, n, i, col)) {
// 			chessBoard[i][col] = 1;
// 			// optimisation
// 			rowCheck[i] = true;
// 			up_D_Check[i-col] = true;
// 			low_D_Check[i+col] = true;

// 			// recursive call
// 			findPlacing(chessBoard, n, col+1, res);

// 			// backtracking
// 			rowCheck[i] = false;
// 			up_D_Check[i-col] = false;
// 			low_D_Check[i+col] = false;

// 			chessBoard[i][col] = 0;
// 		}
// 	}
// }
// vector<vector<int>> nQueens(int n)
// {
// 	vector<vector<int>> res;
// 	vector<vector<int>> chessBoard(n, vector<int>(n, 0));
// 	findPlacing(chessBoard, n, 0, res);
// 	return res;
// }