/*
 * @lc app=leetcode id=2148 lang=cpp
 *
 * [2148] Count Elements With Strictly Smaller and Greater Elements
 */

// @lc code=start
class Solution
{
public:
    int countElements(vector<int> &nums)
    {
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        int x = 0;
        for (int num : nums)
        {
            if (num > mn && num < mx)
            {
                x++;
            }
        }
        return x;
    }
};
// @lc code=end
