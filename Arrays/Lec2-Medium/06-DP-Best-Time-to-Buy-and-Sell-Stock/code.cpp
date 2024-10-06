class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();     // Get the size of the 'prices' array
        int mini = prices[0];      // Initialize 'mini' to the first day's price
        int profit = 0;            // Initialize 'profit' to 0, as no transactions have been made yet

        for (int i = 0; i < n; i++) {  // Iterate over each price in the array
            int cost = prices[i] - mini; // Calculate the potential profit (current price - minimum price so far)
            profit = max(profit, cost);  // Update 'profit' with the maximum of current 'profit' and 'cost'
            mini = min(mini, prices[i]); // Update 'mini' to the minimum price encountered so far
        }

        return profit;  // Return the maximum profit achieved
    }
};
