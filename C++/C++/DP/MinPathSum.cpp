// https://leetcode.com/problems/minimum-path-sum/

// class Solution {
// public:
//     // TABULATION (SPACE OPTIMIZED 1D DP) (BOTTOM-UP DP) TC: O(mn) SC: O(n)

//     int minPathSum(vector<vector<int>>& grid) {
//         int m = grid.size(), n = grid[0].size();
//         vector<int> ans(n, -1);
        
//         // as we can reach src only in one way~
//         ans[0] = grid[0][0];

//         for(int row = 0; row < m; row++) {
//             for(int col = 0; col < n; col++) {

//                 if(row == 0 && col == 0) continue;

//                 int top = INT_MAX, left = INT_MAX;
//                 if(row > 0) top = ans[col];
//                 if(col > 0) left = ans[col-1];

//                 ans[col] = grid[row][col] + min(top, left);
//             }
//         }

//         return ans[n-1];
//     }
// };