// https://leetcode.com/problems/surrounded-regions/

// you did this approach on your own, this is efficient and uses the same TC and SC of the standard approach that interviewers expect, will do the one that interviewers expect beneath this, its less code~

// class Solution {
//     // this function connects and store a region and also returns a bool that tells if a region is surrounded~
//     bool surround(int x, int y, vector<pair<int,int>> &region, 
//     vector<vector<bool>> &visited, const vector<vector<char>> &board) {
//         int m = board.size();
//         int n = board[0].size();

//         bool isSurrounded = true;

//         region.push_back({x, y});
//         visited[x][y] = true;

//         queue<pair<int,int>> q;
//         q.push({x, y});

//         static const int dx[4] = {-1, 1, 0, 0};
//         static const int dy[4] = {0, 0, -1, 1};  

//         while(!q.empty()) {
//             auto [i, j] = q.front();
//             q.pop();

//             // now check if this cell made the region 'not' surrounded
//             if(i == 0 || i == m-1 || j == 0 || j == n-1) isSurrounded = false;

//             // check if adjacent cells are a part of this region~
//             for(int k = 0; k < 4; k++) {
//                 int new_x = i + dx[k];
//                 int new_y = j + dy[k];

//                 // check if in bounds~
//                 if(new_x >= 0 && new_x < m && new_y >=0 && new_y < n) {
//                     if(!visited[new_x][new_y] && board[new_x][new_y] == 'O') {
//                         // this cell is part of this region, so add it and mark it as visited~
//                         region.push_back({new_x, new_y});
//                         visited[new_x][new_y] = true;

//                         q.push({new_x, new_y});
//                     }
//                 }
//             }
//         }

//         return isSurrounded;
//     }

// public:
//     void solve(vector<vector<char>>& board) {
//         int m = board.size();
//         int n = board[0].size();

//         vector<vector<bool>> visited(m, vector<bool>(n, false));

//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 if(!visited[i][j] && board[i][j] == 'O') {
//                     vector<pair<int,int>> region;
//                     bool isSurrounded = surround(i, j, region, visited, board);
                    
//                     // now if the region is surrounded, capture it!
//                     if(isSurrounded) {
//                         for(const auto &cell: region) {
//                             board[cell.first][cell.second] = 'X';
//                         }
//                     }
//                 }
//             }
//         }
//     }
// };

// The standard approach that interviewers expect, mine is equally good~

// Instead of exploring every region and checking if it’s surrounded:

// Start BFS/DFS from all 'O' on the border.
// Mark them as “not capturable” (say with '#').
// Flip all remaining 'O' → 'X'.
// Flip '#' back → 'O'.
// This is simpler since you only worry about border-connected regions.

// this is the one that interviewers expect~

// class Solution {
//     void BFS(int x, int y, int m, int n, vector<vector<char>>& board) {
//         queue<pair<int, int>> q;

//         // marking uncapturable cells as '#' rn~
//         board[x][y] = '#';
//         q.push({x,y});

//         static const int dx[4] = {-1, 1, 0, 0};
//         static const int dy[4] = {0, 0, -1, 1}; 

//         while(!q.empty()) {
//             auto[i, j] = q.front();
//             q.pop();

//             for(int k = 0; k < 4; k++) {
//                 int new_x = i + dx[k];
//                 int new_y = j + dy[k];

//                 if(new_x >= 0 && new_x < m && new_y >= 0 && new_y < n && board[new_x][new_y] == 'O') {
//                     board[new_x][new_y] = '#';
//                     q.push({new_x, new_y});
//                 }
//             }
//         }
//     }

// public:
//     void solve(vector<vector<char>>& board) {
//         int m = board.size(), n = board[0].size();
//         // run BFS for all border O's and mark regions connected with them as not capturable 

//         for(int i = 0; i < m; i++) {
//             if(board[i][0] == 'O') BFS(i, 0, m, n, board);
//             if(board[i][n-1] == 'O') BFS(i, n-1, m,n, board);
//         }

//         for(int j = 0; j < n; j++) {
//             if(board[0][j] == 'O') BFS(0, j ,m, n, board);
//             if(board[m-1][j] == 'O') BFS(m-1, j, m, n, board);
//         }

//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 if(board[i][j] == 'O') board[i][j] = 'X';
//                 else if(board[i][j] == '#') board[i][j] = 'O';
//             }
//         }
//     }
// };