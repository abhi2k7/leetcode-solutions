/*
 * @lc app=leetcode id=728 lang=cpp
 *
 * [728] Self Dividing Numbers
 */

// @lc code=start
class Solution
{
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> solun;
        for (int i = left; i <= right; i++)
        {
            int temp = i;
            bool valid = true;
            while (temp > 0)
            {
                int digit = temp % 10;
                temp /= 10;
                if (digit == 0 or i % digit != 0)
                {
                    valid = false;
                    break;
                }
            }
            if (valid)
            {
                solun.push_back(i);
            }
        }
        return solun;
    }
};
// @lc code=end
