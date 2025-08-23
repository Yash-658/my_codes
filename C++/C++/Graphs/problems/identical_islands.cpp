// https://www.geeksforgeeks.org/problems/number-of-distinct-islands/1

// The trick was to know how to store the shape of the island~

// class Solution {
//         void new_island(int x, int y, int m, int n, string &shape, vector<vector<int>>& grid) {
//         // mark it as visited by turning connected 1s to 0
//         grid[x][y] = 0;

//         static int dx[4] = {-1, 1, 0, 0};
//         static int dy[4] = {0, 0, -1, 1};
//         static string dir = "UDLR";

//         for(int i = 0; i < 4; i++) {
//             int new_x = x + dx[i];
//             int new_y = y + dy[i];

//             if(new_x >= 0 && new_x < m && new_y >= 0 && new_y < n && grid[new_x][new_y] == 1) {
//                 shape.push_back(dir[i]);
//                 new_island(new_x, new_y, m, n, shape, grid);
//             }
//         }
        
//         shape.push_back('B');
//     }
    
//   public:
//     int countDistinctIslands(vector<vector<int>>& grid) {
//         int m = grid.size(), n = grid[0].size();
//         int islands = 0;
//         unordered_set<string> shapes;
        
//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 if(grid[i][j] == 1) {
//                     string shape;
//                     new_island(i, j, m, n, shape, grid);
                    
//                     // now as this is a set, if this shape already exists in it, it won't add automatically
//                     shapes.insert(shape);
//                 }
//             }
//         }

//         return shapes.size();
//     }
// };
