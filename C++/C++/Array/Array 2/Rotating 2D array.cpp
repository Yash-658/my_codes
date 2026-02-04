// https://leetcode.com/problems/rotate-image/description/
// TC: O(n^2), SC: O(1)

// class Solution {
// public:
//     void rotate(vector<vector<int>>& mat) {
//         int n = mat.size();

//         // reverse contents of every row~
//         for(int i = 0; i < n; i++) {
//             reverse(mat[i].begin(), mat[i].end());
//         }

//         // with diagonal line as a pivot, mirror contents of matrix~
//         int currRow = 0, currCol = n-1;
//         while(currRow < n) {
//             for(int i = 0; i < n-currRow; i++) {
//                 swap(mat[currRow][i], mat[n-i-1][currCol]);
//             }   
//             currRow++;
//             currCol--;
//         }
//     }
// };