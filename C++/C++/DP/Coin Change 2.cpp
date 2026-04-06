// ⭐⭐⭐TABULATION KRO ISKA AND PHIR SPACE OPTIMIZATION~

// Let:
// n = coins.size()
// A = amount

// States:
// (index, amount) → n * A

// Each state:
// this version → loop up to n
// standard → O(1)

// So:
// this → ~O(n² * A)
// optimal → ~O(n * A)

// WON'T WORK AS TC TOO MUCH~ 

// class Solution {
// public:

//     int solve(int amount, int index, map<pair<int,int>, int> &dp, const vector<int> &coins) {
//         // base case~
//         if(amount == 0) return 1;    // 1 as you can choose nothing~

//         // check if already computed ways to reach this amount by using coins from this index~
//         if(dp.contains({amount,index})) return dp[{amount, index}];

//         // try all coins to reach this amount~
//         int totalWays = 0;
//         for(int coin = index; coin < coins.size(); coin++) {
//             if(amount-coins[coin] >= 0) totalWays += solve(amount-coins[coin], coin, dp, coins);
//             else break;
//         }

//         return dp[{amount, index}] = totalWays;
//     }

//     int change(int amount, vector<int>& coins) {
//         sort(coins.begin(), coins.end());
//         map<pair<int,int>, int> dp;
// // here dp(amount, index) will denote no. of combinations with which I can get this amount by using coins from this index
//         return solve(amount, 0, dp, coins);
//     }
// };

// OPTIMAL ONE USES CHOICES, EITHER TAKE COIN AT THIS INDEX OR SKIP IT~ 

// ⭐ Memoization O(A*n) SC: O(A*n) for dp array, Recursion depth = O(n + amount / minCoin)

// class Solution {
// public:
//     int solve(int amount, int index, vector<vector<int>> &dp, const vector<int> &coins) {
//         // base case~
//         if(amount == 0) return 1;    // 1 as you can choose nothing~
//         if(index >= coins.size() || amount-coins[index] < 0) return 0;

//         // check if already computed ways to reach this amount by using coins from this index~
//         if(dp[amount][index] != -1) return dp[amount][index];

//         // 2 choices, either skip this coin at this index or take it~
//         int choice1 = solve(amount, index+1, dp, coins);
//         int choice2 = solve(amount-coins[index], index, dp, coins);

//         return dp[amount][index] = choice1 + choice2;
//     }

//     int change(int amount, vector<int>& coins) {
//         sort(coins.begin(), coins.end());   // sorted so we can prune early whenever amount-coin[index] < 0
//         vector<vector<int>> dp(amount+1, vector<int>(coins.size(), -1));
// // here dp(amount, index) will denote no. of combinations with which I can get this amount by using coins from this index
//         return solve(amount, 0, dp, coins);
//     }
// };

