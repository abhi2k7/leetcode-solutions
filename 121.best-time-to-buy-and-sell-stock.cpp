/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int max_profit = 0, best_buy = prices[0];
        for (int price : prices)
        {
            if (price > best_buy)
            {
                max_profit = max(max_profit, price - best_buy);
            }
            best_buy = min(best_buy, price);
        }
        return max_profit;
    }
};
// @lc code=end
