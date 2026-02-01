// https://leetcode.com/problems/set-matrix-zeroes/

// TC: O(mn) SC: O(m+n) 
// This is better approach than just zeroing every row and col when you see a zero, 
// cuz SC would be O(mn) cuz we will have to make a copy of current matrix in that solution~ (if done inplace it would lead to cascading zeroes)

// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& mat) {
//         int m = mat.size(), n = mat[0].size();
//         unordered_set<int> targetRows, targetCols;      // avg TC of insert, search: O(1)    // we can also we vector<bool> instead of this, it will give guranteed O(1)

//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 // if 0, add that col and row in sets
//                 if(mat[i][j] == 0) {
//                     targetRows.insert(i);
//                     targetCols.insert(j);
//                 }
//             }
//         }

//         // updating the matrix~
//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 if(mat[i][j] != 0) {
//                     if(targetRows.find(i) != targetRows.end() || targetCols.find(j) != targetCols.end()) {
//                         mat[i][j] = 0;
//                     }
//                 }
//             }
//         }
//     }
// };

/*
MOST OPTIMAL SOLUTION: 
“Use the first row and column as a notice board — but keep two sticky notes to remember if the board itself must be erased.”

Why (0,0) is special:
It belongs to both first row and first column → cannot store two flags, so use booleans.

TC: O(mn) SC: O(1)
	​
class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        bool first_col = false, first_row = false;

        //for first col~
        for(int i = 0; i < m; i++) {
            if(mat[i][0] == 0) first_col = true;
        }

        //for first row~
        for(int j = 0; j < n; j++) {
            if(mat[0][j] == 0) first_row = true;
        }

        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                // if 0, set first col and first row to 0 as flags
                if(mat[i][j] == 0) {
                    mat[i][0] = 0;
                    mat[0][j] = 0;
                }
            }
        }

        // updating the matrix~
        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                if(mat[i][0] == 0 || mat[0][j] == 0) {
                    mat[i][j] = 0;
                }
            }
        }

        if(first_col) {
            for(int i = 0; i < m; i++) {
                mat[i][0] = 0 ;
            } 
        }

        if(first_row) {
            for(int j = 0; j < n; j++) {
                mat[0][j] = 0;
            }
        }
    }
};
*/