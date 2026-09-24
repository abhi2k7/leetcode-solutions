/*
 * @lc app=leetcode id=2706 lang=cpp
 *
 * [2706] Buy Two Chocolates
 */

// @lc code=start
class Solution
{
public:
    int buyChoco(vector<int> &prices, int money)
    {
        int min1 = INT_MAX, min2 = INT_MAX;
        for (int price : prices)
        {
            if (price < min1)
            {
                min2 = min1;
                min1 = price;
            }
            else if (price < min2)
            {
                min2 = price;
            }
        }
        int cost = min1 + min2;
        if (cost <= money)
        {
            return money - cost;
        }
        return money;
    }
};
// @lc code=end
