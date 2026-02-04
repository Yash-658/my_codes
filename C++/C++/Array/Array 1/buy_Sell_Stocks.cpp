class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, buyDay = 0;
        for(int sellDay = 1; sellDay < prices.size(); sellDay++) {
            int profit = prices[sellDay] - prices[buyDay];
            if(profit < 0) {
                buyDay = sellDay;
            }

            else {
                // profit is +ve
                maxProfit = max(profit, maxProfit);
            }
        }

        return maxProfit;
    }
};