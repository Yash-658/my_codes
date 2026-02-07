// https://leetcode.com/problems/search-a-2d-matrix/
// INTUTION: Just treat the 2D matrix as a single array~

// O(log(m*n)) O(1)

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& mat, int target) {
//         int n = mat.size(), m = mat[0].size();

//         int mid, low = 0, high = (n*m)-1;

//         while(low <= high) {
//             mid = low + (high-low)/2;
//             int midRow = mid/m, midCol = mid%m;

//             if(mat[midRow][midCol] == target) return true;
//             else if(mat[midRow][midCol] > target) high = mid-1;
//             else low = mid+1;
//         }

//         return false;
//     }
// };