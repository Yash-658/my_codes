// Recursive Solution: O(2^(m+n)) O(m+n),, This will give TLE on submission~
// DP memoization solution~

// class Solution {
// public:
//     int countUniquePaths(int row, int col, int rows, int cols, vector<vector<int>> &dp) {
//         // base case~
//         if(row == rows-1 && col == cols-1) {
//             return 1;
//         }

//         // if we already know the unique paths from this cell, return it~
//         if(dp[row][col] != -1) {
//             return dp[row][col];
//         }
        
//         // go down if valid~
//         int down = 0, right = 0;
//         if(row+1 < rows) down = countUniquePaths(row+1, col, rows, cols, dp);
//         // go right if valid~
//         if(col+1 < cols) right = countUniquePaths(row, col+1, rows, cols, dp);

//         return dp[row][col] = down+right;
//     }

//     int uniquePaths(int m, int n) {
//         vector<vector<int>> dp(m, vector<int>(n, -1));
//         return countUniquePaths(0, 0, m, n, dp);
//     }
// };

// tabulation~
// class Solution {
// public:
//     // tabulation~
//     int uniquePaths(int m, int n) {
//         vector<vector<int>> dp(m, vector<int>(n, -1));
//         for(int i = 0; i < max(m,n); i++) {
//             if(i < m) dp[i][0] = 1;
//             if(i < n) dp[0][i] = 1;
//         }

//         for(int i = 1; i < m; i++) {
//             for(int j = 1; j < n; j++) {
//                 dp[i][j] = dp[i-1][j] + dp[i][j-1];
//             }
//         }

//         return dp[m-1][n-1];
//     }
// };

// DP 1D SPACE OPTIMIZED TABULATION O(mn) O(n)
// class Solution {
// public:
//     // tabulation~
//     int uniquePaths(int m, int n) {
//         vector<int> dp(n, 1);   // indicating first row~
        
//         for(int i = 1; i < m; i++) {
//             for(int j = 1; j < n; j++) {
//                 dp[j] = dp[j] + dp[j-1];
//             }
//         }

//         return dp[n-1];
//     }
// };

// COMBINATORICS~

// The robot has to take some number of steps in each direction and crucially, it cannot move backwards.
// As such, the order in which the steps are taken is irrelevant to the answer, we only care about how many of each there are.
// In your example, it's 2 right and 2 down, which we can represent conceptually as RRDD. 
// The different paths are the permutations of that, so we get 4!/2!2! = 6.

// Theres m-1 ways to go down and n-1 ways to go right, so to arrange them you just need to find (m+n-2)! / (m-1)!(n-1)!

// Now crucially, this algorithm is simply carrying out operations, and thus uses O(1) space. 
// Now for the time complexity, we need to realise it'll be dominated by the "large" factorial, i.e R + D, which we will call n. The complexity is thus O(n).

