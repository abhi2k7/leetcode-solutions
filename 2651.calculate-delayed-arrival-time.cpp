/*
 * @lc app=leetcode id=2651 lang=cpp
 *
 * [2651] Calculate Delayed Arrival Time
 */

// @lc code=start
class Solution
{
public:
    int findDelayedArrivalTime(int t1, int t2)
    {
        int time = t1 + t2;
        if (time >= 24)
        {
            time -= 24;
        }
        return time;
    }
};
// @lc code=end
