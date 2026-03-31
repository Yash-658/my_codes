// FOR LEETCODE ONE - https://leetcode.com/problems/n-queens/submissions/1965164484/

// TC: O(N!)  SC: O(n*n)

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