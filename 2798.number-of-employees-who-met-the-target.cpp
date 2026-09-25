/*
 * @lc app=leetcode id=2798 lang=cpp
 *
 * [2798] Number of Employees Who Met the Target
 */

// @lc code=start
class Solution
{
public:
    int numberOfEmployeesWhoMetTarget(vector<int> &hours, int target)
    {
        int employee_count = 0;
        for (int time : hours)
        {
            if (time >= target)
            {
                employee_count += 1;
            }
        }
        return employee_count;
    }
};
// @lc code=end
