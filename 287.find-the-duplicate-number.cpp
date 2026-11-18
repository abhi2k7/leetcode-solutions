/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int sl, fast;
        sl = fast = nums[0];
        do
        {
            sl = nums[sl];
            fast = nums[nums[fast]];
        } while (sl != fast);
        sl = nums[0];
        while (sl != fast)
        {
            sl = nums[sl];
            fast = nums[fast];
        }
        return sl;
    }
};
// @lc code=end
