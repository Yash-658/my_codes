// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/1906365174/
// TC: O(n) SC: O(1)
// intution: agr profit -ve aa rha hai that means buyDay se sellDay pe price km tha, and aage dekhne pr bhi sellDay pe khridne pr zyada profit hoga~

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxProfit = 0, buyDay = 0;
//         for(int sellDay = 1; sellDay < prices.size(); sellDay++) {
//             int profit = prices[sellDay] - prices[buyDay];
//             if(profit < 0) {
//                 buyDay = sellDay;
//             }

//             else {
//                 // profit is +ve
//                 maxProfit = max(profit, maxProfit);
//             }
//         }

//         return maxProfit;
//     }
// };