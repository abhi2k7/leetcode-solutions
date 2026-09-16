/*
 * @lc app=leetcode id=1295 lang=cpp
 *
 * [1295] Find Numbers with Even Number of Digits
 */

// @lc code=start
class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int step = 0;
        for (int i : nums)
        {
            int temp = i, cnt = 0;
            while (temp > 0)
            {
                cnt += 1;
                temp /= 10;
            }
            if (cnt % 2 == 0)
            {
                step++;
            }
        }
        return step;
    }
};
// @lc code=end
