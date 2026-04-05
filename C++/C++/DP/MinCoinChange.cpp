// https://leetcode.com/problems/coin-change/

// MEMOIZATION TC: O(amount*n) SC: O(amount)  n = types of coin~

// class Solution {
// public:
//     int solve(int amount, vector<int> &dp, const vector<int> &coins) {
//         // base case~
//         if(amount == 0) return 0;

//         // if we already computed for this amount~
//         if(dp[amount] != -1) return dp[amount];

//         int minCoins = INT_MAX;
//         for(int coin: coins) {
//             if(amount - coin >= 0) {
//                 minCoins = min(minCoins, solve(amount-coin, dp, coins));
//                 // to deal with 1 + INT_MAX case we aren't adding + 1 coin rn~
//             }
//         }
//         // now adding +1 if minCoins != INT_MAX
//         if(minCoins != INT_MAX) minCoins++;

//         return dp[amount] = minCoins;
//     }

//     int coinChange(vector<int>& coins, int amount) {
//         vector<int> dp(amount+1, -1);
//         int ans = solve(amount, dp, coins);
//         return (ans != INT_MAX ? ans : -1);
//     }
// };

// ⭐ Tabulation~ TC: O(amount*n) SC: O(amount)
// here dp[i] tells min num of coins to reach 'i' amount~
// here we removed recursion stack space O(amount), rest TC and SC are same as in memoization~

// class Solution {
// public:
//     int coinChange(vector<int>& coins, int amount) {
//         vector<int> dp(amount+1, 0);

//         for(int i = 1; i <= amount; i++) {     // starting from 1 as dp[0] will always be 0~
//             int minCoins = INT_MAX;

//             for(int coin: coins) {
//                 if(i - coin >= 0) minCoins = min(minCoins, dp[i-coin]);
//                 // to deal with 1 + INT_MAX case we aren't adding + 1 coin rn~
//             }

//             if(minCoins != INT_MAX) minCoins++;

//             dp[i] = minCoins;
//         }

//         return (dp[amount] != INT_MAX ? dp[amount] : -1);
//     }
// };