// https://leetcode.com/problems/01-matrix/

// class Solution {
// public:
//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//         // we will use a multi source BFS here starting from all 0s~
//         int m = mat.size(), n = mat[0].size();

//         queue<pair<int,int>> q;
//         vector<vector<int>> distance(m, vector<int>(n, -1));

//         // add all 0s in the queue~
//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 // now if 0, mark their distance as 0 and push them in queue as now we know their distance
//                 if(mat[i][j] == 0) {
//                     distance[i][j] = 0;
//                     q.push({i, j}); 
//                 }  
//             }
//         }

//         int dx[4] = {-1, 1, 0, 0};
//         int dy[4] = {0, 0, -1, 1};

//         // start the multi source BFS~
//         while(!q.empty()) {
//             auto [x, y] = q.front();
//             q.pop();

//             // fill the distances of its neighbour~
//             for(int i = 0; i < 4; i++) {
//                 int new_x = x + dx[i];
//                 int new_y = y + dy[i];

//                 // now check first if in bounds and then check if the distance is still unknown
//                 // once the distance of a cell is set, its final as bfs traverses the innermost layer first

//                 if(new_x >= 0 && new_x < m && new_y >= 0 && new_y < n && distance[new_x][new_y] == -1) {
//                     distance[new_x][new_y] = distance[x][y] + 1;
//                     q.push({new_x, new_y});
//                 }
//             }
//         }

//         return distance;
//     }
// };