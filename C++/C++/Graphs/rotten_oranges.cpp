// https://leetcode.com/problems/rotting-oranges/

// class Solution {
// public:
//     int orangesRotting(vector<vector<int>>& grid) {
//         int time = 0;       // time 0 pe phele se hi rotten hai, time 1 pe first time adjacents ko khrab kr denge

//         int m = grid.size(), n = grid[0].size();

//         queue<pair<int, int>> rotten;

//         // queue all rotten oranges of the grid
//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 if(grid[i][j] == 2) {
//                     rotten.push({i,j});
//                 }
//             }
//         }

//         int dx[4] = {-1, 1, 0, 0};
//         int dy[4] = {0, 0, -1, 1};

//         while(!rotten.empty()) {
//             int rot = 0;
//             int currRotten = rotten.size();

//             for(int i = 0; i < currRotten; i++) {
//                 pair<int, int> temp = rotten.front(); 
//                 rotten.pop();

//                 // check for adjacent oranges that this rotten orange will damage~
//                 for(int i = 0; i < 4; i++) {
//                     int new_x = temp.first + dx[i];
//                     int new_y = temp.second + dy[i];

//                     // check for potential indices are in bounds and is a fresh orange present here~
//                     if(new_x >= 0 && new_x < m && new_y >= 0 && new_y < n && grid[new_x][new_y] == 1) {
//                         rot++;
//                         // rot it and put it in queue
//                         grid[new_x][new_y] = 2;
//                         rotten.push({new_x, new_y});
//                     }
//                 }
//             }

//             if(rot > 0) time++;
//         }

//         // check if its impossible to rot all fresh ones
//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 if(grid[i][j] == 1) {
//                     return {-1};
//                 }
//             }
//         }

//         return time;
//     }
// };