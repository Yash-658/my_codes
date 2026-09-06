// https://leetcode.com/problems/minimum-cost-to-make-at-least-one-valid-path-in-a-grid/?utm_source=chatgpt.com

// class Solution {
// public:
//     // try to see it as a graph, with 4 outgoing edges at each cell, direction side cell weight = 0, others = 1~
//     // can use dijkstra but that would be mn*log(mn), can use 0-1 BFS cuz we know the wieghts can be only 0 or 1~

//     int minCost(vector<vector<int>>& grid) {
//         int m = grid.size(), n = grid[0].size();

//         deque<vector<int>> q;
//         q.push_back({0,0,0});    // cost, row, col
//         vector<vector<int>> minCost(m, vector<int>(n, INT_MAX));
//         minCost[0][0] = 0;

//         vector<int> dx = {0, 0, 1, -1};    // RLDU
//         vector<int> dy = {1, -1, 0, 0};

//         while(!q.empty()) {
//             auto curr = q.front();
//             int cost = curr[0], row = curr[1], col = curr[2];
//             q.pop_front();

//             for(int i = 0 ; i < 4; i++) {
//                 int adjRow = row + dx[i], adjCol = col + dy[i];

//                 if(adjRow >= 0 && adjRow < m && adjCol >= 0 && adjCol < n) {
//                     // this is a valid cell~
//                     int addCost = (grid[row][col] == (i+1) ? 0:1);

//                     if(cost + addCost < minCost[adjRow][adjCol]) {
//                         int totalCost = cost + addCost;
//                         minCost[adjRow][adjCol] = totalCost;



//                         if(addCost == 0) q.push_front({totalCost, adjRow, adjCol});
//                         else q.push_back({totalCost, adjRow, adjCol});
//                     }
//                 }
//             }
//         }

//         return minCost[m-1][n-1];
//     }
// };