// https://takeuforward.org/plus/dsa/problems/subset-sum-equals-to-target?source=strivers-sde-sheet

// TOP_DOWN memoization DP TC: O(n*target) SC: O(n*target)    SPACE CAN BE OPTIMIZED BY USING 1D DP

// class Solution {
// public:
//     bool solve(int ind, int target, const vector<int> &arr,
//                vector<vector<int>> &dp) {

//         if (target == 0) return true;
//         if (ind == arr.size()) return false;

//         if (dp[ind][target] != -1)
//             return dp[ind][target];

//         bool take = false;
//         if (arr[ind] <= target) {
//             take = solve(ind + 1, target - arr[ind], arr, dp);
//         }

//         bool notTake = solve(ind + 1, target, arr, dp);

//         return dp[ind][target] = take || notTake;
//     }

//     bool isSubsetSum(vector<int> arr, int target) {
//         vector<vector<int>> dp(
//             arr.size(),
//             vector<int>(target + 1, -1)
//         );

//         return solve(0, target, arr, dp);
//     }
// };