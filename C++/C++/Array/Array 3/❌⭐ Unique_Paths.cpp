// Recursive Solution: O(2^(m+n)) O(m+n),, This will give TLE on submission~
// ISKA DP SOLUTION KRNA DP WALI SERIES DEKHNE KE BAAD~

// class Solution {
// public:
//     void numberOfPaths(int curr_row, int curr_col, int m, int n, int &paths) {
//         // Base-Case: if we are on finish~
//         if(curr_row == m-1 && curr_col == n-1) {
//             paths++;
//             return;
//         }

//         // Go down if we can~
//         if(curr_row < m-1) {
//             numberOfPaths(curr_row+1, curr_col, m, n, paths);
//         }

//         // Go right if we can~
//         if(curr_col < n-1) {
//             numberOfPaths(curr_row, curr_col+1, m, n, paths);
//         }
//     }

//     int uniquePaths(int m, int n) {
//         int paths = 0;
//         numberOfPaths(0, 0, m, n, paths);
//         return paths;
//     }
// };

// COMBINATORICS~

// The robot has to take some number of steps in each direction and crucially, it cannot move backwards.
// As such, the order in which the steps are taken is irrelevant to the answer, we only care about how many of each there are.
// In your example, it's 2 right and 2 down, which we can represent conceptually as RRDD. 
// The different paths are the permutations of that, so we get 4!/2!2! = 6.

// Theres m-1 ways to go down and n-1 ways to go right, so to arrange them you just need to find (m+n-2)! / (m-1)!(n-1)!

// Now crucially, this algorithm is simply carrying out operations, and thus uses O(1) space. 
// Now for the time complexity, we need to realise it'll be dominated by the "large" factorial, i.e R + D, which we will call n. The complexity is thus O(n).

