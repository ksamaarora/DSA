### 121. Best Time to Buy and Sell Stock

#### Difficulty: Easy

#### Problem:
You are given an array `prices` where `prices[i]` represents the price of a given stock on the **i-th** day. You want to maximize your profit by choosing **one day** to buy a stock and choosing a **different day** in the future to sell that stock.

Return the **maximum profit** you can achieve from this transaction. If no profit can be achieved, return `0`.

#### Examples:

**Example 1:**

- **Input:** `prices = [7,1,5,3,6,4]`
- **Output:** `5`
- **Explanation:** 
  - Buy on day 2 (price = 1) and sell on day 5 (price = 6), the profit is `6 - 1 = 5`.
  - Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

**Example 2:**

- **Input:** `prices = [7,6,4,3,1]`
- **Output:** `0`
- **Explanation:** 
  - In this case, no transactions are done, and the maximum profit is `0` because the prices are consistently decreasing.

#### Constraints:

- `1 <= prices.length <= 10^5`
- `0 <= prices[i] <= 10^4`

___