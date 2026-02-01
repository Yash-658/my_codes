
// TC: O(mn) SC: O(m+n)

// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& mat) {
//         int m = mat.size(), n = mat[0].size();
//         unordered_set<int> targetRows, targetCols;      // avg TC of insert, search: O(1)    // we can also we vector<bool> instead of this, it will give guranteed O(1)

//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 // if 0, add that col and row in sets
//                 if(mat[i][j] == 0) {
//                     targetRows.insert(i);
//                     targetCols.insert(j);
//                 }
//             }
//         }

//         // updating the matrix~
//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 if(mat[i][j] != 0) {
//                     if(targetRows.find(i) != targetRows.end() || targetCols.find(j) != targetCols.end()) {
//                         mat[i][j] = 0;
//                     }
//                 }
//             }
//         }
//     }
};