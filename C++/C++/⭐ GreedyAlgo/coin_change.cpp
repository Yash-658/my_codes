// it can be done by greedy only if its guranteed standard coin systems like USA, INDIA as they have 1 unit currency everytime so locally optimal choice can lead to global optimum~
// In general case, DP is required~


// tabulation BOTTOM UP DP, TC: O(amount*coins) O(amount)

// class Solution {
// public:
//     int coinChange(vector<int>& coins, int amount) {
//         vector<int> dp(amount+1, INT_MAX);  
//         dp[0] = 0;
        
//         for(int i = 1; i <= amount; i++) {
//             int tempAns = INT_MAX;
//             for(int coin: coins) {
//                 if(i - coin >= 0) {
//                     tempAns = min(tempAns, dp[i-coin]);
//                 }
//             }

//             if(tempAns != INT_MAX) tempAns++;
//             dp[i] = tempAns;
//         }

//         return dp[amount] == INT_MAX ? -1 : dp[amount];
//     }
// };