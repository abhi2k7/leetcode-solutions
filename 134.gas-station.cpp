/*
 * @lc app=leetcode id=134 lang=cpp
 *
 * [134] Gas Station
 */

// @lc code=start
class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int total = 0, tank = 0, st = 0;
        for (int i = 0; i < gas.size(); i++)
        {
            int diff = gas[i] - cost[i];
            total += diff;
            tank += diff;
            if (tank < 0)
            {
                st = i + 1;
                tank = 0;
            }
        }
        return total >= 0 ? st : -1;
    }
};
// @lc code=end
