/*
 * @lc app=leetcode id=2455 lang=cpp
 *
 * [2455] Average Value of Even Numbers That Are Divisible by Three
 */

// @lc code=start
class Solution
{
public:
    int averageValue(vector<int> &nums)
    {
        int cnt = 0, sm = 0,avrg;
        for (int i : nums)
        {
            if (i % 2 == 0 && i % 3 == 0)
            {
                sm += i;
                cnt++;
            }
        }

        if (cnt != 0)
        {
            avrg = sm / cnt;
            return avrg;
        }
        return 0;
    }
};
// @lc code=end
