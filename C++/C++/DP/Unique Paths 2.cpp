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