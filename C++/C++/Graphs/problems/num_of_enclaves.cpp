// https://leetcode.com/problems/number-of-enclaves/

// class Solution {

// public:
//     int numEnclaves(vector<vector<int>>& grid) {
//         int notEnclaves = 0, m = grid.size(), n = grid[0].size();
        
//         // start a multi source BFS from all 1s that are on the boundry~
//         queue<pair<int, int>> q;
//         vector<vector<bool>> visited(m, vector<bool>(n, false));

//         for(int i = 0; i < m; i++) {
//             if(grid[i][0] == 1 && !visited[i][0]) {
//                 visited[i][0] = true;
//                 q.push({i, 0});
//             }

//             if(grid[i][n-1] == 1 && !visited[i][n-1]) {
//                 visited[i][n-1] = true;
//                 q.push({i, n-1});
//             }
//         } 

//         for(int j = 0; j < n; j++) {      // not including all 4 corners here cuz we already included them~
//             if(grid[0][j] == 1 && !visited[0][j]) {
//                 visited[0][j] = true;
//                 q.push({0, j});
//             }
//             if(grid[m-1][j] == 1 && !visited[m-1][j]) {
//                 visited[m-1][j] = true;
//                 q.push({m-1, j});
//             }
//         }

//         int dx[4] = {-1, 1, 0, 0};
//         int dy[4] = {0, 0, -1, 1};

//         while(!q.empty()) {
//             auto [x, y] = q.front();
//             q.pop();

//             notEnclaves++;
//             for(int i = 0; i < 4; i++) {
//                 int new_x = x + dx[i];
//                 int new_y = y + dy[i];

//                 if(new_x >= 0 && new_x < m && new_y >= 0 && new_y < n && 
//                    !visited[new_x][new_y] && grid[new_x][new_y] == 1) 
//                 {
//                     visited[new_x][new_y] = true;
//                     q.push({new_x, new_y});
//                 }
//             }
//         }

//         int totalOnes = 0;
//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 if(grid[i][j] == 1) totalOnes++;
//             }
//         }

//         return totalOnes - notEnclaves;
//     }
// };