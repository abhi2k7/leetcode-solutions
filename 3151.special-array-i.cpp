/*
 * @lc app=leetcode id=3151 lang=cpp
 *
 * [3151] Special Array I
 */

// @lc code=start
class Solution
{
public:
    bool isArraySpecial(vector<int> &nums)
    {
        int i = 0, j = i + 1;
        while (j < nums.size())
        {
            if (nums[i] % 2 == nums[j] % 2)
            {
                return false;
            }
            i++;
            j++;
        }
        return true;
    }
};
// @lc code=end
