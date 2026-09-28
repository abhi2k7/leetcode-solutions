/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */

// @lc code=start
class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        long long int mx1 = LLONG_MIN, mx2 = LLONG_MIN, mx3 = LLONG_MIN;
        for (int num : nums)
        {
            if (num > mx1)
            {
                mx3 = mx2;
                mx2 = mx1;
                mx1 = num;
            }
            else if (num > mx2 && num != mx1)
            {
                mx3 = mx2;
                mx2 = num;
            }
            else if (num > mx3 && num != mx2 && num != mx1)
            {
                mx3 = num;
            }
        }
        if (mx3 == LLONG_MIN)
        {
            return mx1;
        }
        return mx3;
    }
};
// @lc code=end
