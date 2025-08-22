// https://leetcode.com/problems/number-of-islands/submissions/1744217635/

// class Solution {
// public:
//     void dfs(int x, int y, int m, int n, vector<vector<char>>& grid) {
//         // mark it as visited by turning connected 1s to 0
//         grid[x][y] = '0';

//         static int dx[4] = {-1, 1, 0, 0};
//         static int dy[4] = {0, 0, -1, 1};

//         for(int i = 0; i < 4; i++) {
//             int new_x = x + dx[i];
//             int new_y = y + dy[i];

//             if(new_x >= 0 && new_x < m && new_y >= 0 && new_y < n && grid[new_x][new_y] == '1')
//             dfs(new_x, new_y, m, n, grid);
//         }
//     }

//     int numIslands(vector<vector<char>>& grid) {
//         int m = grid.size(), n = grid[0].size();
//         int islands = 0;

//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 if(grid[i][j] == '1') {
//                     islands++;
//                     dfs(i, j, m, n, grid);
//                 }
//             }
//         }

//         return islands;
//     }
// };