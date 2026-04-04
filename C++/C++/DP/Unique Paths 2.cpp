// https://leetcode.com/problems/unique-paths-ii/

// TC: O(n^2) SC: O(m*n);   as we using memoization (top-down DP), we are not recomputing paths if we already did for a cell, so for every cell we are processing only once, and SC is due to 2D array 

// class Solution {
// public:
//     int solve(int row, int col, int m, int n, vector<vector<int>> &ans,const vector<vector<int>>& obstacleGrid) {
//         // base case
//         if(row == m-1 && col == n-1) {
//             return 1;
//         }

//         // check if already computed paths from this cell~
//         if(ans[row][col] != -1) return ans[row][col];

//         int down = 0, right = 0;

//         // go down if safe~
//         if(row+1 != m && obstacleGrid[row+1][col] == 0) {
//             down = solve(row+1, col, m, n, ans, obstacleGrid);
//         }

//         // go right if safe~
//         if(col+1 != n && obstacleGrid[row][col+1] == 0) {
//             right = solve(row, col+1, m, n, ans, obstacleGrid);
//         }

//         return ans[row][col] = down + right;
//     }

//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int m = obstacleGrid.size();
//         int n = obstacleGrid[0].size();

//         if(obstacleGrid[0][0] == 1 || obstacleGrid[m-1][n-1]) return 0;    // if starting was blocked~

//         vector<vector<int>> ans(m, vector<int>(n, -1));
//         return solve(0, 0, m, n, ans, obstacleGrid);
//     }
// };

// TABULATION (BOTTOM-UP APPROACH) TC: O(m*n)  SC: O(m*n)  BUT NO RECURSION SPACE AS ITS AN ITERATIVE APPROACH~(SPACE IS CUZ WE USED 2D DP, CAN OPTIMISE IT MORE USING 1D DP)

// tabulation~
    // int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    //     int rows = obstacleGrid.size(), cols = obstacleGrid[0].size();
    //     vector<vector<int>> ans(rows, vector<int>(cols, 0));
        
    //     if(obstacleGrid[0][0] == 1 || obstacleGrid[rows-1][cols-1] == 1) return 0;

    //     ans[0][0] = 1;  // as we can reach source in one way~

    //     for(int row = 0; row < rows; row++) {
    //         for(int col = 0; col < cols; col++) {
    //             if(row == 0 && col == 0) continue;
    //             if(obstacleGrid[row][col] == 1) {
    //                 // this means its an obstacle, 0 ways to reach here~
    //                 continue;
    //             }

    //             int up = 0, left = 0;

    //             if(row > 0) up = ans[row-1][col];
    //             if(col > 0) left = ans[row][col-1];

    //             ans[row][col] = up + left;
    //         }
    //     }

    //     return ans[rows-1][cols-1];
    // }


//     Tabulation TC: O(mn) SC: O(n) (SPACE OPTIMISED 1D DP)~
//     
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int rows = obstacleGrid.size(), cols = obstacleGrid[0].size();
//         vector<int> ans(cols, 0);

//         if(obstacleGrid[0][0] == 1 || obstacleGrid[rows-1][cols-1] == 1) return 0;

//         ans[0] = 1;  // as we can reach source in one way~

//         for(int row = 0; row < rows; row++) {
//             for(int col = 0; col < cols; col++) {
//                 if(row == 0 && col == 0) continue;
//                 if(obstacleGrid[row][col] == 1) {
//                     // this means its an obstacle, 0 ways to reach here~
//                     ans[col] = 0;
//                     continue;
//                 }

//                 int up = 0, left = 0;

//                 if(row > 0) up = ans[col];
//                 if(col > 0) left = ans[col-1];

//                 ans[col] = up + left;
//             }
//         }

//         return ans[cols-1];
//     }
// };